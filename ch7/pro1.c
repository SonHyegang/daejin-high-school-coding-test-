#include<stdio.h>
int main()
{
	unsigned int num, count=0;
	printf("Enter an interger : ");
	scanf("%u",&num);
	while(num){
		if(num%2&1)
			count++;
		num=num>>1;
	}
	printf("The total number of is in the bit representation is %s",count%2?"odd":"even");
	
	return 0;
}

