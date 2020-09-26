#include<stdio.h>

cal(int *a, int *b, int *c) {
	(*a)++;
	(*b) *= (*c);
	int temp = *b;
	*b = *c;
	*c = temp;
}

int main()
{
	int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Before: a = %d, b = %d, c = %d\n", a, b, c);
	cal(&a, &b, &c);
	printf("After: a = %d, b = %d, c = %d\n", a, b, c);
	
	return 0;
}

