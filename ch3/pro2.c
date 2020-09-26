#include<stdio.h>

int perfect_num(int num);

int main()
{
	int i;
	
	printf("For the integers from 1 to 1000:\n");
	for (i = 2;i < 1000;i++)
	{
		if (perfect_num(i))
			printf("%d is perfcet \n", i);
	}

	return 0;
}

int perfect_num(num)
{
	int i, factor_sum=1;
	for (i = 2;i < num;i++){
		if (num%i == 0)
			factor_sum += i;
	}
	if (factor_sum == num)
		return 1;
	else
		return 0;
}
