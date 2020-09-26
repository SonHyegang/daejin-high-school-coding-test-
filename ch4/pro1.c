#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int check_array(int array[],int i){
	int j;
	for(j=0;j<i;j++){
		if(array[i]==array[j])
			return 1;
	}
	return 0;
}
int main()
{
	int array[20];
	int i,j;
	
	srand(time(NULL));
	printf("Nonrepetitive array values are:\n");
	
	for(i=0;i<20;i++){
		array[i]=rand()%20+1;
		if(check_array(array,i))
			break;
		printf("Array[ %d ] = %d\n",i,array[i]);
	}
	
	return 0;
}
