#include<stdio.h>
int main()
{
	int i,j;
	int input1[2][3], input2[2][3], result[2][3];
	FILE *fp1, *fp2, *fp3;
	
	
	if((fopen_s(&fp1,"input1.txt","rt"))!=0){
		printf("File could not be opened\n");
		exit(1);
	}
	printf("input1 matrix : \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			fscanf(fp1,"%d",&input1[i][j]);
			printf("%d\t",input1[i][j]);
		}
		printf("\n");
	}
	
	if((fopen_s(&fp2,"input2.txt","rt"))!=0){
		printf("File could not be opened\n");
		exit(1);
	}
	
	printf("\ninput2 matrix : \n");	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			fscanf(fp2,"%d",&input2[i][j]);
			printf("%d\t",input2[i][j]);
		}
		printf("\n");
	}
	
	fp3=fopen("result.txt","w");
	printf("\nresult matrix : \n");	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			result[i][j]=input1[i][j]+input2[i][j];
			fprintf(fp3,"%d\t",result[i][j]);
			printf("%d\t",result[i][j]);
		}
		fprintf(fp3,"\n");
		printf("\n");
	}
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	
	return 0;	
} 
