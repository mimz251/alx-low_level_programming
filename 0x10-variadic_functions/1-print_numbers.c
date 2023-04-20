#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - prints number
 * @separator: string printed between numbers.
 * @a: no. of integers passed to function.
 * @...: number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int a, ...)
{
	va_list nums;
	unsigned int index;


	va_start(nums, a);


	for (index = 0; index < a; index++)
	{
		printf("%d", va_arg(nums, int));


		if (index != (a - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(nums);
}
