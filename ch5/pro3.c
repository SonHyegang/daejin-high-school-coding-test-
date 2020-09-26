#include<stdio.h>
void concatenation(char *str1, char *str2) {
	while (*str1++ != '\0');
	*str1--;
	while (*str1++=*str2++);
}

int main()
{
	char str1[80], str2[80];
	printf("Enter two strings : ");
	scanf("%s %s",&str1,&str2);
	concatenation(str1,str2);
	printf("%s",str1);
	return 0;
}
