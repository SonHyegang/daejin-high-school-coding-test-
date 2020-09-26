#include<stdio.h>
#include<string.h>

typedef struct {
	int lowercount[26];
	int uppercount[26];
}chcount;

chcount count[3];
int main()
{
	int i, j;
	char text[3][80], *temp;
	
	printf("Enter three lines of text : \n");
	for(i=0;i<3;i++)
		gets(text[i]);
	
	for(i='a';i<='z';i++){
		for(j=0;j<3;j++){
			temp=text[j];
			while(temp=strchr(temp,i)){
				count[j].lowercount[i-'a']++;
				temp++;
			}
		}	
	}
	
	for(i='A';i<='Z';i++){
		for(j=0;j<3;j++){
			temp=text[j];
			while(temp=strchr(temp,i)){
				count[j].uppercount[i-'A']++;
				temp++;
			}
		}	
	}
	
	printf("\nPrint Line\n\n");
	printf("%-17d%-17d%-17d\n",0,1,2);
	for(i='a';i<='z';i++){
		for(j=0;j<3;j++){
			printf("%c :%2d   %c :%2d    ",i,count[j].lowercount[i-'a'],i-32,count[j].uppercount[i-'a']);
		}
		printf("\n");
	}
	
	return 0;
}

