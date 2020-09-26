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
/*
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
	FILE *fp=fopen("stdlist1.bin","wb");
	int i;
	char line[80];
	
	fgets(line,"80",stdin);
	while(!feof(stdin)){
		sscanf_s(line,"%s %d %f %d %d %d",list.name,20,&list.stdnum,&list.avg,&list.kor,&list.math,&list.eng);
		fgets(line,80,stdin);
	}
	
	fclose(fp);
	
	return 0;
}

#include<stdio.h>
typedef struct student{
	char name[20];
	int stdnum;
	float avg;
	int kor;
	int math;
	int eng;
}student;
student list[]={
{"Student1",1936,18.000000,39,10,5},
{"Student2",1961,58.666668,16,97,63},
{"Student3"	1965,48.666668,76,25,45},
{"Student4"	1596,44.666668,78,41,15},
{"Student5"	1250,56.000000,62,20,86}
};
int main()
{
	FILE *fp=fopen("stdlist1.bin","wb");
	int i;
	for(i=0;i<5;i++){
		
	}
	
	fclose(fp);
	
	return 0;
}
*/
