#include<stdio.h>
typedef struct student{
	char name[20];
	int id;
	int grade;
	char major[20];
}student;

int main()
{
	int i, search;
	student data;
	student list[5];
	
	FILE *fp1=fopen("student_file.txt","w");
	
	for(i=0;i<5;i++){
		printf("Name Student_number Grade Major : ");
		scanf("%s %d %d %s",data.name,&data.id,&data.grade,data.major);
		fprintf(fp1,"%s %d %d %s\n",data.name,data.id,data.grade,data.major);
	}
	fclose(fp1);
	
	FILE *fp2=fopen("student_file.txt","r");
	if(fp1==0){
		printf(" Error about File occurred\n");
		exit(1);
	}
	
	printf("Insert the student number to find : ");
	scanf("%d",&search);
	
	for(i=0;i<5;i++){
		fscanf(fp2,"%s %d %d %s",list[i].name,&list[i].id,&list[i].grade,list[i].major);
		if(list[i].id==search)
			printf("The major of student with ID %d is %s\n",search,list[i].major);	
	}
	fclose(fp2);
	
	return 0;
}
