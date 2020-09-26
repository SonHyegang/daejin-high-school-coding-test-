#include<stdio.h>
#include<math.h>

int reverse(int num);

int main()
{
	int n1;
	printf("Enter a number between 1 and 9999: ");
	scanf("%d", &n1);
	printf("The number with its digits reversed is: %d",reverse(n1));

	return 0;
}
int reverse(num)
{
	int reverse_num = 0;
	while(num){
		reverse_num*=10;
		reverse_num+=(num%10);
		num/=10;
	}
	return reverse_num;
}
