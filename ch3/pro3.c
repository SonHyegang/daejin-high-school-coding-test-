#include<stdio.h>

int ulcase(char c1);

int main()
{
	char c1;
	printf("Enter the character : ");
	scanf("%c", &c1);
	
	printf("%c: %s\n", c1, ulcase(c1) ? "Uppercase" : "Lowercase");

	return 0;
}

int ulcase(char c1)
{
	if (c1>='A'||c1<='Z')
		return 1;
	else
		return 0;
}

