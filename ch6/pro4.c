#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k;
	char text[10][20], temp[20];
	for(i=0;i<10;i++){
		printf("Enter a string : ");
		gets(text[i]);
	}
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(strcmp(text[i],text[j])==1){
				strcpy(temp,text[i]);
				strcpy(text[i],text[j]);
				strcpy(text[j],temp);
			}
		}
		for(i=0;i<10;i++)
			printf("%s ",text[i]);
	}
	printf("\nThe strings in sorted order are :\n");
	for(i=0;i<10;i++)
		printf("%s\n",text[i]);
	
	return 0;
}
