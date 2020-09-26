#include<stdio.h>
void display(unsigned int bits);
int reverseBits(unsigned int bits);
int main()
{
	unsigned int num, reverse;
	printf("Enter an unsigned integer : ");
	scanf("%u",&num);
	printf("\nBefore bits are reversed :\n");
	printf("%10u = ",num);
	display(num);
	printf("\n\nAfter bits are reversed :\n");
	printf("%10u = ",reverse=reverseBits(num));
	display(reverse);
	
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
int reverseBits(unsigned int bits){
	unsigned int reverse=0;
	unsigned int i;
	unsigned int mask=1;
	for(i=0;i<15;i++,mask<<=1,reverse<<=1){
		if(((bits&mask)==mask))
			reverse++;
	}
	return reverse;
}
