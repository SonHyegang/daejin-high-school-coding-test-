#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rand_coin();

int main()
{
	int i, coin, count_head = 0, count_tail = 0;

	srand(time(NULL));

	for (i = 1;i <= 100;i++) {
		coin = rand_coin();
		printf("%s ", coin ? "Heads" : "Tails");
		if (i % 10 == 0)
			printf("\n");
		if (coin == 0)
			count_tail++;
		else
			count_head++;
	}
	printf("\nThe total number of Heads was %d\n", count_head);
	printf("The total number of Tails was %d", count_tail);

	return 0;
}

int rand_coin()
{
	return rand() % 2;
}
