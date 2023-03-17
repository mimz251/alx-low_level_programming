#include < stdlib.h >
#include < time.h >
#include <stdio>
/**
 * main - Determines if a number is positive and negative.
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n". n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n".);
	}
	else
	{
		printf("%d is a negative\n". n);
	}
	return (0);
}

