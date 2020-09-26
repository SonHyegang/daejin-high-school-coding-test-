#include<stdio.h>

void stringReverse(char strArray[]);

int main()
{
	char strArray[30]="Print this string backward.";
	int i;
	for(i=0;i<30;i++)
		printf("%c",strArray[i]);
	printf("\n");
	stringReverse(strArray);
	
	return 0;
}

void stringReverse(char strArray[]){
	if(strArray[0]=='\0')
		return;
	stringReverse(&strArray[1]);
	printf("%c",strArray[0]);
}
