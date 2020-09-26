#include<stdio.h>
int main()
{

	int n,i=1, fac=1;
	printf("Enter a positive integer : ");
	scanf("%d", &n);
	while (n < 0){
		printf("Enter a positive integer : ");
		scanf("%d", &n);
	}

	while (i <= n) {
		fac *= i++;
	}
	printf("%d! is %d", n, fac);

	return 0;
}
