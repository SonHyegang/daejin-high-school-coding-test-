#include<stdio.h>
int add(int *a, int *b);
int sub(int *a, int *b);
int mul(int *a, int *b);

int main()
{
	int (*func[3])(int, int) = { add, sub, mul };
	char operator[3]={'+','-','*'};
	int select, num1, num2;
		//size_y select;
	printf("0.Addition\n1.Subtraction\n2.Multiplication\n3.End\n");
	printf("select the operation : ");
	scanf("%d",&select);
	if(select!=3){
		printf("Enter the two numbers : ");
		scanf("%d %d",&num1,&num2);
		printf("\n%d %c %d = %d\n",num1,operator[select],num2,func[select](&num1,&num2));	
	}
	
	return 0;
}

int add(int *a, int *b){
	return *a+*b;
}
int sub(int *a, int *b){
	return *a-*b;
}
int mul(int *a, int *b){
	return *a**b;
}

