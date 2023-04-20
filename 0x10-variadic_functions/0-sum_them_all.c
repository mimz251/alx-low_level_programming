#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - sum of all its paramters.
 * @p: no. of paramters passed to the function.
 * @...: A variable number of paramters to calculate sum.
 *
 * Return: If n == 0 - 0.
 * else - the sum of all parameters.
 */
int sum_them_all(const unsigned int p, ...)
{
	va_list ap;
	unsigned int i, sum = 0;


	va_start(ap, p);


	for (i = 0; i < p; i++)
		sum += va_arg(ap, int);


	va_end(ap);


	return (sum);
}

