#include<stdio.h>
int main()
{
	int i, num;
	printf("Decimal\t\tBinary\n");
	for (i = 0;i <= 15;i++)
	{
		printf("%d\t\t", i);
		num = i;
		printf("%d", num<16 && num >= 8 ? 1 : 0);
		num %= 8;
		printf("%d", num<8 && num >= 4 ? 1 : 0);
		num %= 4;
		printf("%d", num<4 && num >= 2 ? 1 : 0);
		num %= 2;
		printf("%d", num<2 && num >= 1 ? 1 : 0);
		printf("\n");
	}
	
	return 0;
}
