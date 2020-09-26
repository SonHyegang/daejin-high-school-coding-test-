#include<stdio.h>
#define MAX 10

void bubbleSort(int *arr);

int main()
{
	int arr[MAX] = { 10,5,1,6,3,9,4,2,8,7 };
	int i;
	bubbleSort(arr);

	for (i = 0;i<MAX;i++) {
		printf("%d  ", arr[i]);
	}

	return 0;
}

void bubbleSort(int *arr) {
	int i, j, temp;
	for (i = 0;i<MAX;i++) {
		for (j = 0;j<MAX - 1 - i;j++) {
			if (arr[j]>arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
