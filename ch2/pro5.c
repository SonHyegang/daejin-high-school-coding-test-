#include<stdio.h>
int main()
{
	int item, quantities;
	double retail_price = 0.0;
	printf("Enter pairs of item numbers and quantities.\n");
	printf("Enter -1 for the item number to end input.\n");
	scanf("%d", &item);
	while(item!=-1) {
		scanf("%d", &quantities);
		switch (item) {
			case 1:{
				retail_price += 2.98*quantities;
				break;
			}
			case 2:{
				retail_price += 4.50*quantities;
				break;
			}
			case 3:{
				retail_price += 9.98*quantities;
				break;
			}
			case 4:{
				retail_price += 4.49*quantities;
				break;
			}
			case 5:{
				retail_price += 6.87*quantities;
				break;
			}
			default:{
				printf("Invalid product code: %d\n\t   Quantitiy: %d\n", item, quantities);
				break;
			}
		}
		scanf("%d", &item);
	}
	
	printf("The total retail value was:  %.2f",retail_price);
	
	return 0;
}
