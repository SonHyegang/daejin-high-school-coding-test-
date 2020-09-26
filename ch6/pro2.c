#include<stdio.h>
#include<string.h>
int main()
{
	char str[3][80];
	char *search;
	int i, j, count[26] = {0};
	
	printf("Enter three lines of text : \n");
	for(i=0;i<3;i++){
		gets(str[i]);
		for(j=0;str[i][j];j++)
			str[i][j]=tolower(str[i][j]);
	}
	for(i=0;i<26;i++){
		for(j=0;j<3;j++){
			search=str[j];
			while(search=strchr(search,'a'+i)){
				count[i]++;
				*search++;
			}
		}
	}
	
	printf("\nThe total occurrences of each character : \n");
	for (i = 0;i < 26;i++)
		printf("%c: %3d\n", i + 97, count[i]);

	return 0;
}

