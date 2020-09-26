#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#define MAX 5

typedef struct {
	char name[80];
	int stdnum;
}student;
student korea_university[MAX];

void bubbleSort();

int main()
{
	int i;
	char text[MAX][30], *temp;
	
	for (i = 0;i < MAX;i++) {
		printf("<%d> Enter student name / student number: ",i+1);
		gets(text[i]);
		temp = strtok(text[i], "/");
		strcpy(korea_university[i].name,temp);
		temp = strtok(NULL, " ");
		korea_university[i].stdnum=atoi(temp);
	}
	
	bubbleSort();
	
	printf("\nID\t   Name\n");
	for(i=0;i<MAX;i++)
		printf("%-10d  %s\n",korea_university[i].stdnum,korea_university[i].name);
	
	return 0;
}

void bubbleSort() {
	int i, j;
	student temp;
	
	for (i = 0;i<MAX;i++) {
		for (j = 0;j<MAX - 1 - i;j++) {
			if (korea_university[j].stdnum>korea_university[j+1].stdnum) {
				temp=korea_university[j];
				korea_university[j]=korea_university[j+1];
				korea_university[j+1]=temp;
			}
		}
	}
}

