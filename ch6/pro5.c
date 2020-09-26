#include<stdio.h>
#include<string.h>
int check(char word[][20],char *temp){
	int i;
	for(i=1;i<30;i++){
		if(!strcmp(word[i],temp))
			return i;
	}
	return 0;
}
int main()
{
	int i,j=1,index, count[30]={0};
	char text[3][80], word[30][20]={0}, *temp;
	
	printf("Enter three lines of text :\n");
	for(i=0;i<3;i++){
		gets(text[i]);
		temp=strtok(text[i]," .\n");
		while(temp){
			if(index=check(word,temp))
				count[index]++;
			else{
				count[j]++;
				strcpy(word[j++],temp);
			}
			temp = strtok(NULL, " .\n");
		}
	}
	
	printf("\n");
	for(i=1;count[i];i++){
		printf("\"%s\" appeared %d time\n",word[i],count[i]);
	}
	
	return 0;
}
