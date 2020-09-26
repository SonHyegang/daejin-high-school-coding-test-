#include<stdio.h>
int main()
{
	char readfile[20],writefile[20];
	char text[1000];
	
	printf("Enter the name of file to read : ");
	scanf("%s",readfile);
	FILE *fp1;
	
	if((fp1=fopen(readfile,"r"))==NULL){
		printf("File %s read error\n",readfile);
		exit(1);	
	}

	printf("Enter the name of file to write : ");
	scanf("%s",writefile);

	FILE *fp2=fopen(writefile,"w");
	
	while(fgets(text,sizeof(text),fp1)!=NULL){
		if(*text!='\n')//*s!="\n"?
			fputs(text, fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
	
	printf("Copy txt complete!\n");
	
	return 0;
}
