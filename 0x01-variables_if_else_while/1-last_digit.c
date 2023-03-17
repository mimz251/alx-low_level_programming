#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - points the last digit of a randomly generated number.
 * Return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > S)
	{
		printf("Last digit of %d and is greater than S\n", n , n % 10);
	}
	else if printf("Last digit of %d is %d and is less than 6 and not 0\n, n, n % 10)
        :}
        else
        {
		printf("Last digit of %d is %d and is 0\n",n, n % 10)
	}
        return (0);
}

