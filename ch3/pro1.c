#include<stdio.h>
#include<math.h>

double hypotenuse(double side1, double side2);

int main()
{
	int i;
	double n1, n2;

	for (i = 0;i < 3;i++) {
		printf("Enter the sides of the triangle : ");
		scanf("%lf %lf", &n1, &n2);

		printf("Hypotenuse : %0.1lf\n", hypotenuse(n1, n2));
	}

	return 0;
}

double hypotenuse(double side1, double side2)
{
	return (sqrt(pow(side1, 2) + pow(side2, 2)));
}
