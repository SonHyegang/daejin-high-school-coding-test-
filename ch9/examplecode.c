pro2 

/*
	file open error출력
	구조체 사용
	입력 후 fprintf(fp,"%s %d %d %s\n",...,...,...,...);
	fclose 후 다시 읽기로 열기 + open error 추가
	fscanf로 해서 다시 불러 들이기 
	구조체 2번 선언 sturct student struct find student[5] 
	FILE *fp1;
	if(fopen(&fp1,"...txt","w")!=NULL){
		printF("error");
		exit(1);//return 0;도 괜찮음. 
	}
	
	
*/	 

pro4
#include<stdio.h>
#define MAX 5

typedef struct student{
	char name[80];
	int stdnum;
	int kor;
	int math;
	int eng;
	float avg;
}student;
student list[10];

void sort();

int main()
{
	int i;
	FILE *fp1,*fp2;
	if((fopen_s(&fp1,"stdlist.txt","rb"))!=0){//rb or rt 다른 결과 
		printf("File could not be opened\n");
		exit(1);
	}
	/*
	fread(list[0].name,sizeof(char),100,fp1);
	fclose(fp1);
	fp2=fopen("stdlist1.txt","wb");
	fprintf(fp2,list[0].name);
	fclose(fp2);
	*/
	/*
	fread(list[0].name,sizeof(char),9,fp1);
	printf("%-20s",list[0].name);
	fread(&list[0].stdnum,sizeof(int),5,fp1);
	printf("%c",list[0].stdnum);
	*/
	//fread(temp,sizeof(temp),1,fp1);
	//printf("%-20s %-6s %-15s %-5s %-5s %-s\n",list[0].name,list[0].stdnum,list[0].avg,list[0].kor,list[0].math,list[0].eng);
	//char t;
	
	printf("%-20s %-6s %-15s %-5s %-5s %-5s\n","Name","ID","Avg","KOR","MATH","ENG");
	for(i=0;i<MAX;i++){
		/*
		fread(list[i].name,sizeof(char),9,fp1);
		fread(&t,sizeof(char),1,fp1);
		fread(&list[i].stdnum,sizeof(int),1,fp1);
		fread(&t,sizeof(char),1,fp1);
		fread(&list[i].avg,sizeof(float),1,fp1);
		fread(&t,sizeof(char),1,fp1);
		fread(&list[i].kor,sizeof(int),1,fp1);
		fread(&t,sizeof(char),1,fp1);
		fread(&list[i].math,sizeof(int),1,fp1);
		fread(&t,sizeof(char),1,fp1);
		fread(&list[i].eng,sizeof(int),1,fp1);
		//fread(&t,sizeof(char),1,fp1);
		*/
		
		fread((void*)&list[i],sizeof(student),1,fp1);
		printf("%-20s %-6d %-15f %-5d %-5d %-5d\n",list[i].name,list[i].stdnum,list[i].avg,list[i].kor,list[i].math,list[i].eng);
		printf("1");
	}

	sort();
	fopen_s(&fp2,"resultlist.txt","w");
	
	printf("\n%-20s %-6s %-15s %-5s %-5s %-s\n","Name","ID","Avg","KOR","MATH","ENG");
	for(i=0;i<MAX;i++){
		fprintf(fp2,"%s %d %lf %d %d %d",list[i].name,list[i].stdnum,list[i].avg,list[i].kor,list[i].math,list[i].eng);
		printf("%-20s %-6s %-15s %-5s %-5s %-s\n",list[i].name,list[i].stdnum,list[i].avg,list[i].kor,list[i].math,list[i].eng);
	}
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}

void sort(){
	int i,j;
	student temp;
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX-1-i;j++){
			if(list[j].avg<list[j+1].avg){
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
			}
		}
	}
}

fread(list[i].name,sizeof(char),9,fp1);
		fread(&t,sizeof(char),1,fp1);
		fread(&list[i].stdnum,sizeof(int),1,fp1);
		fread(&t,sizeof(char),1,fp1);
		fread(&list[i].avg,sizeof(float),1,fp1);
		fread(&t,sizeof(char),1,fp1);
		fread(&list[i].kor,sizeof(int),1,fp1);
		fread(&t,sizeof(char),1,fp1);
		fread(&list[i].math,sizeof(int),1,fp1);
		fread(&t,sizeof(char),1,fp1);
		fread(&list[i].eng,sizeof(int),1,fp1);
와 
fread(&list[i],sizeof(student),1,fp1);
는 동일 결과 
