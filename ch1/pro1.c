#include<stdio.h>
int main()
{
	int n1, n2, sum=0, temp;
	printf("Enter two integers : ");
	scanf("%d %d", &n1, &n2);
	temp = n1; 
	if (n1 > n2) {
		temp = n2;
		n2 = n1;
		n1 = temp;
	}
	while (n1 <= n2)
		sum += n1++;
	printf("The sum of all integers between %d and %d is %d", temp,n2,sum);

	return 0;

}
