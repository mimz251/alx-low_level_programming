#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
* is_digit - check strings containing a non-digit char
* @d: string to be evaluated
* Return: 0 if a non-digit is found, 1 otherwise
*/
int is_digit(char *d)
{
	int i = 0;

	while (d[i])
	{
		if (d[i] < '0' || d[i] > '9')
		return (0);
		i++;
		}
		return (1);
}
/**
* _strlen - returns the length of a string
* @d: string to evaluate
* Return: the length of the string
*/
int _strlen(char *d)
{
	int i = 0;

	while (d[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
* errors - errors handler
*/
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: always 0 (Success)
*/
int main(int argc, char *argv[])
{
	char *d1, *d2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	d1 = argv[1], d2 = argv[2];
	if (argc != 3 || !is_digit(d1) || !is_digit(d2))
		errors();
	len1 = _strlen(d1);
	len2 = _strlen(d2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);

	if (!result)
		return (1);

	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = d1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(d2) - 1; len2 >= 0; len2--)
		{
			digit2 = d2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
		result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)	
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
	_putchar('0');		
	_putchar('\n');
	free(result);
	return (0);
}
