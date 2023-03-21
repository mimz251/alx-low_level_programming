#include <unistd.h>
/**
 *main - _putchar writes character c into stdout
 *Return: 1 (Success)
 */
int _putchar(char c)

{
	return (write(1, &c, 1));

}
