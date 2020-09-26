#include<stdio.h>
void display(unsigned int bits);
int cal(unsigned int num, unsigned int pow);

int main()
{
	unsigned int num, pow, mask=1<<31, i, result;
	printf("Enter two integers :");
	scanf("%u %u",&num, &pow);
	
	printf("number :\n\t%2u = ",num);
	display(num);
	printf("\n\npow :\n\t%2u = ",pow);
	display(pow);
	printf("\n\n%2u * 2^%u  = %2d\n",num, pow, result=cal(num, pow));
	printf("%10u = ",result);
	display(result);
	
	return 0;	
}

void display(unsigned int bits){
	unsigned int i;
	unsigned int mask=1<<15;
	for(i=0;i<16;i++,bits<<=1){
		printf("%d",(bits&mask)==mask?1:0);
		if(i==7)
			printf(" ");
	}
}
int cal(unsigned int num, unsigned int pow){
	return num<<pow;
}
