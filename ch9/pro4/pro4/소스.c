#include<stdio.h>
#define MAX 5

typedef struct student {
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
	FILE *fp1, *fp2;

	if ((fopen_s(&fp1, "stdlist.txt", "r")) != 0) {//rb or rt 다른 결과 
		printf("File could not be opened\n");
		exit(1);
	}

	printf("%-20s %-6s %-15s %-5s %-5s %-5s\n", "Name", "ID", "Avg", "KOR", "MATH", "ENG");
	for (i = 0;i<MAX;i++) {
		fread(&list[i], sizeof(student), 1, fp1);
		/*
		fread(list[i].name,sizeof(char),9,fp1);
		fread(&list[i].stdnum,sizeof(int),1,fp1);
		fread(&list[i].avg,sizeof(float),1,fp1);
		fread(&list[i].kor,sizeof(int),1,fp1);
		fread(&list[i].math,sizeof(int),1,fp1);
		fread(&list[i].eng,sizeof(int),1,fp1);
		*/
		printf("%-20s /%-6d /%-15f /%-5d /%-5d /%-5d\n", list[i].name, list[i].stdnum, list[i].avg, list[i].kor, list[i].math, list[i].eng);
		printf("한줄출력\n");
	}

	sort();
	fopen_s(&fp2, "resultlist.txt", "w");

	printf("\n%-20s %-6s %-15s %-5s %-5s %-s\n", "Name", "ID", "Avg", "KOR", "MATH", "ENG");
	for (i = 0;i<MAX;i++) {
		fprintf(fp2, "%s %d %f %d %d %d", list[i].name, list[i].stdnum, list[i].avg, list[i].kor, list[i].math, list[i].eng);
		printf("%-20s %-6s %-15s %-5s %-5s %-s\n", list[i].name, list[i].stdnum, list[i].avg, list[i].kor, list[i].math, list[i].eng);
	}

	fclose(fp1);
	fclose(fp2);

	system("pause");
	return 0;
}

void sort() {
	int i, j;
	student temp;
	for (i = 0;i<MAX;i++) {
		for (j = 0;j<MAX - 1 - i;j++) {
			if (list[j].avg<list[j + 1].avg) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}