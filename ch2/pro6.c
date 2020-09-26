#include<stdio.h>
int main()
{
	double pi = 0.0, denom;
	long int loop, accuracy, term;
	printf("Accuracy set at : ");
	scanf("%d", &accuracy);
	printf("Term set at : ");
	scanf("%d", &term);
	printf("term\t\t   pi\n");

	for (loop = 1;loop <= accuracy;loop++) {
		denom = loop * 2 - 1;
		if (loop % 2 == 0)
			pi -= 4 / denom;//(double)4/(loop*2-1)Çüº¯È¯  
		if (loop % 2 == 1)
			pi += 4 / denom;
		if (loop%term == 0)
			printf("%d\t\t%.6f\n", loop, pi);
	}

	return 0;
}
