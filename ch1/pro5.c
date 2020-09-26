#include<stdio.h>
int main()
{
	int n=1,sum=0, large=0, small=0, odd_c=0, even_c=0, negative_c=0;
	while (n != 0) {
		printf("Input the number : ");
		scanf("%d", &n);
		sum += n;
		if (n > large)
			large = n;
		if (n < small)
			small = n;
		if (n > 0 && n % 2 == 0)
			even_c++;
		if (n > 0 && n % 2 == 1)
			odd_c++;
		if (n < 0)
			negative_c++;

	}
	printf("------------------------\n");
	printf("Sum : %d\nLargest : %d\nSmallest : %d\nOdd number count : %d\nEven number count : %d\nNegative number count : %d",sum,large,small,odd_c,even_c,negative_c);
	
	return 0;
}
