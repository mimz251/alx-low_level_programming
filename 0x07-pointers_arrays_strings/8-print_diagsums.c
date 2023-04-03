#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix int
 * @a: pointed address
 * @size: size
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int sum3, sum4, m;

	sum3 = 0;
	sum4 = 0;

	for (m = 0; m < size; m++)
	{
		sum3 = sum3 + a[m * size + m];
	}

	for (m = size - 1; m >= 0; m--)
	{
		sum4 += a[m * size + (size - m - 1)];
	}
	printf("%d, %d\n", sum3, sum4);
}

