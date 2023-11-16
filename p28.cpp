#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define SIZE 5
int main(void)
{
	int a[SIZE] = { 0, 1, 2, 3, 4 };
	int b[SIZE] = { 0, 2, 4, 6, 8 };
	int i;
	printf("Effects of passing entire array by reference:\n\nThe"
		"values of the original array are:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", a[i]);
	}

	printf("\n");
	printf("The values of the modified array are:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", b[i]);
	}

	printf("\n\n\nEffects of passing array element"
		"by value: \n\nThe value of a[3] is %d\n",
		b[3]);
	printf("value in modifyElment is 12\n");
	printf("The value of a[3] is %d\n", b[3]);
	system("pause");
	return 0;
}
