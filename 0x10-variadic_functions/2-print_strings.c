#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - Prints strings
 * @separator: printed string
 * @b:number of strings passed.
 * @...:number of strings printed
 */
void print_strings(const char *separator, const unsigned int b, ...)
{
	va_list strings;
	char *str;
	unsigned int index;


	va_start(strings, b);


	for (index = 0; index < b; index++)
	{
		str = va_arg(strings, char *);


		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);


		if (index != (b - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(strings);
}


