#include<stdio.h>
typedef struct student{
	char name[20];
	int stdnum;
	float avg;
	int kor;
	int math;
	int eng;
}student;
student list;

int main()
{
	FILE *fp1=fopen("stdlist2.txt","w");
	int i;
	for(i=0;i<5;i++){
		scanf("%s %d %f %d %d %d",list.name,&list.stdnum,&list.avg,&list.kor,&list.math,&list.eng);
		fwrite(&list,sizeof(student),1,fp1);
	}
	
	fclose(fp1);
	return 0;
}
