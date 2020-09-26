#include<stdio.h>
#include<string.h>

typedef struct {
	char word[20];
	int count;
	int isWritten;
}wordutility;

wordutility text[20];

int check(char *temp);

int main()
{
	char input_text[3][80], *temp;
	int i, j=0,index;
	
	printf("Enter three lines of text :\n");
	for (i = 0;i < 3;i++) {
		gets(input_text[i]);
		temp = strtok(input_text[i], " ");
		while (temp) {
			index = check(temp);
			if (index)
				text[index-1].count++;
			else{
				text[j].count++;
				text[j].isWritten++;
				strcpy(text[j++].word,temp);
			}
			temp = strtok(NULL, " .\n");
		}
	}
	
	for(i=0;text[i].isWritten;i++)
		printf("\n\"%s\" appeared %d %s",text[i].word,text[i].count,text[i].count==1?"time":"times");

	return 0;
}

int check(char *temp) {
	int i;
	for (i = 0;text[i].count;i++) {
		if (!strcmp(temp, text[i].word))
			return i+1;
	}
	return 0;
}
