#include<stdio.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	
	int arr[10];
	int *inverse=arr;
	int i;
	for(i=0;i<10;i++)
		arr[i]=rand()%99+1;
	
	for(i=0;i<10;i++)
		printf("%2d ",*inverse++);
	printf("\n");
	for(i=0;i<10;i++)
		printf("%2d ",*--inverse);
		
	return 0;
}
