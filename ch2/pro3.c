#include<stdio.h>
int main()
{
	int n1, n2, rn=1, i;
	do {
		printf("Enter the base number: ");
		scanf("%d", &n1);
	} while (n1 < 0);
	do {
		printf("Enter the exponent number: ");
		scanf("%d", &n2);
	} while (n2 < 0);
	for (i = n2;i > 0;i--)//pow() math.h
	{
		rn = rn * n1;
	}
	printf("%d^%d is %d", n1, n2, rn);
	
	return 0;
}
