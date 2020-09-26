#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[4][10];
	int i, sum=0;
	for (i = 0;i < 4;i++) {
		printf("Enter an ainteger string : ");
		scanf("%s", &str[i]);
		sum += atoi(str[i]);
	}
	printf("\nThe total of the values is %d", sum);

	return 0;
}

