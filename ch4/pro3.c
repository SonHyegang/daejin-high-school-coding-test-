#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void summat(int mat1[][6],int mat2[][6],int mat3[][6]);

int main()
{
	int i, j;
	int mat1[5][6],mat2[5][6],mat3[5][6];
	
	srand(time(NULL));
	printf("\nmatrix1:\n");
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("%4d",mat1[i][j]=rand()%100+1);
		}
		printf("\n");
	}
	printf("\nmatrix2:\n");
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("%4d",mat2[i][j]=rand()%100+1);
		}
		printf("\n");
	}
	summat(mat1,mat2,mat3);
	printf("\nmatrix3:\n");
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("%4d",mat3[i][j]);
		}
		printf("\n");
	}

	return 0;
}
void summat(int mat1[][6],int mat2[][6],int mat3[][6]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++)
			mat3[i][j]=mat1[i][j]+mat2[i][j];
	}
}

