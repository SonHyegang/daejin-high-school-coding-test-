#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5

typedef struct student{
	char name[80];
	int stdnum;
	float avg;
	int kor;
	int math;
	int eng;
}student;
student list[MAX];

void sort();

int main()
{
	int i;
	FILE *fp1,*fp2;
	
	if((fopen_s(&fp1,"stdlist.txt","rb"))!=0){//rb or rt 다른 결과 
		printf("File could not be opened\n");
		exit(1);
	}
	
	printf("%-20s %-6s %-15s %-5s %-5s %-5s\n","Name","ID","Avg","KOR","MATH","ENG");
	
	char line[1000],*temp;
	fread(line,sizeof(char),1000,fp1);
	temp=strtok(line," \n\t");
	for (i = 0;i < MAX;i++) {
		strcpy(list[i].name,temp);
		temp = strtok(NULL, " \n\t");
		list[i].stdnum=atoi(temp);
		temp = strtok(NULL, " \n\t");
		list[i].avg=atof(temp);
		temp = strtok(NULL, " \n\t");
		list[i].kor=atoi(temp);
		temp = strtok(NULL, " \n\t");
		list[i].math=atoi(temp);
		temp = strtok(NULL, " \n\t");
		list[i].eng=atoi(temp);
		temp = strtok(NULL, " \n\t");
		printf("%-20s %-6d %-15f %-5d %-5d %-5d\n",list[i].name,list[i].stdnum,list[i].avg,list[i].kor,list[i].math,list[i].eng);
	}
	/*
	for(i=0;i<MAX;i++){
		fread(&list[i],sizeof(student),1,fp1);
			
		//fscanf(fp1,"%20s %d %f %d %d %d",list[i].name,&list[i].stdnum,&list[i].avg,&list[i].kor,&list[i].math,&list[i].eng);
		
		fread(list[i].name,sizeof(char),9,fp1);
		fread(&list[i].stdnum,sizeof(int),1,fp1);
		fread(&list[i].avg,sizeof(float),1,fp1);
		fread(&list[i].kor,sizeof(int),1,fp1);
		fread(&list[i].math,sizeof(int),1,fp1);
		fread(&list[i].eng,sizeof(int),1,fp1);
		printf("%-20s %-6d %-15f %-5d %-5d %-5d\n",list[i].name,list[i].stdnum,list[i].avg,list[i].kor,list[i].math,list[i].eng);
	}
	*/	
	/*
	while(fread(&list[i],sizeof(student),1,fp1))
		printf("%-20s %-6d %-15f %-5d %-5d %-5d\n",list[i].name,list[i].stdnum,list[i].avg,list[i].kor,list[i].math,list[i].eng);
	*/
	sort();
	fopen_s(&fp2,"resultlist.txt","w");

	printf("\n%-20s %-6s %-15s %-5s %-5s %-5s\n","Name","ID","Avg","KOR","MATH","ENG");
	for(i=0;i<MAX;i++){
		fprintf(fp2,"%s %d %f %d %d %d\n",list[i].name,list[i].stdnum,list[i].avg,list[i].kor,list[i].math,list[i].eng);
		printf("%-20s %-6d %-15f %-5d %-5d %-5d\n",list[i].name,list[i].stdnum,list[i].avg,list[i].kor,list[i].math,list[i].eng);
	}
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}

void sort(){
	int i, j;
	student temp;
	
	for(i = 0;i < MAX;i++){
		for(j = 0;j < MAX - 1 - i;j++){
			if(list[j].avg < list[j+1].avg){
				temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
		}
	}
}
