#include<stdio.h>

int gcd(int n1,int n2);

int main()
{
	int n1, n2;
	printf("Input gcd number : ");
	scanf("%d %d",&n1,&n2);
	printf("gcd : %d\n",gcd(n1,n2));
	
	return 0;
}

int gcd(n1, n2)
{
	if(n2==0)
		return n1;
	if(n1>n2)
		return gcd(n2,n1%n2);
	else
		return gcd(n1,n2%n1);
}
