#include<stdio.h>
int main()
{
	
	int n=1000, nc, cnt=0;
	while (n < 10000 || n > 100000){
		printf("Enter a 5-digit number : ");
		scanf("%d", &n);
	}
	nc = n;
	while (n > 0) {
		if (n % 10 == 7)
			cnt++;
		n /= 10;
	}
	printf("The number %d is has %d seven(s) in it", nc, cnt);

	return 0;	
}
