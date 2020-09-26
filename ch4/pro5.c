#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void findmat(int mat[][5]);

int main()
{
	int mat[5][5];
	int i,j;
	srand(time(NULL));
	printf("Matrix\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			printf("%4d",mat[i][j]=rand()%9+1);
		printf("\n");
	}
	findmat(mat);
	
	return 0;
}

void findmat(int mat[][5]){
	int i, j, sum,val_largest=0, val_smallest=36, largest[2],smallest[2];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			sum=mat[i][j]+mat[i][j+1]+mat[i+1][j]+mat[i+1][j+1];
			if(sum>val_largest){
				val_largest=sum;
				largest[0]=i;
				largest[1]=j;
			}
			if(sum<val_smallest){
				val_smallest=sum;
				smallest[0]=i;
				smallest[1]=j;
			}
		}
	}
	printf("The largest square value : %d (%d,%d)\n",val_largest,largest[0],largest[1]);
	printf("The smallest square value : %d (%d,%d)\n",val_smallest,smallest[0],smallest[1]);
}
