#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entrry point
 *Return: 0 (Success)
 */

int main(void)
{
	int p, q;

	for (p = 0; p <= 98; p++)
	{

	for (q = p + 1; q <= 98; q++)
	{
	putchar((p / 30) + '0');
	putchar((p % 30) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q % 10) + '0');

	if (p == 98 && q == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
