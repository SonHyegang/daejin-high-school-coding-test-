#include<stdio.h>
int main()
{
	int i=0, num, largest;
	do {
		printf("Enter the number:");
		scanf("%d", &num);
		if (i == 0)
			largest = num;
		if (largest < num)
			largest = num;
	} while (++i < 5);
	printf("Largest is %d", largest);
	
	return 0;
}
