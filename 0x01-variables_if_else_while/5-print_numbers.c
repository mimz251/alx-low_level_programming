#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all single digit numbers of base 10
 * Return: 0 (Success)
 */

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);

}