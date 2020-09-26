#include<stdio.h>
#include<string.h>
int main() {
	char str[3][80], *temp;
	int i, count[20]={0};
	printf("Enter three lines of text :\n");
	for (i = 0;i < 3;i++) {
		gets(str[i]);
		temp=strtok(str[i]," .\n");
		while(temp){
			count[strlen(temp)]++;
			temp = strtok(NULL, " .\n");
		}
	}

	for(i=0;i<20;i++){
		if(count[i])
			printf("\n%d %s of length %d",count[i],count[i]==1?"word":"words",i);
	}
	
	return 0;
}
