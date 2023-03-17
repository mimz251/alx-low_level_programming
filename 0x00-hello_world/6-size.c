#include <stdio.h>
/**
 * main - A program that prints the sizes of data types
 * Return 0 (success)
 * /
int main(void)
{
printf("Size of a char: %lu byte (s)", (unsigned long) sizeof (char));
printf("Size of an int: %lu byte (s)", (unsigned long) sizeof (int));
printf("Size of a long int: %lu byte (s)", (unsigned long) sizeof (long int));
printf("Size of a long long int: %lu byte (s)", (unsigned long) sizeof (long long int));
printf("Size of float: %lu byte (s)", (unsigned long) sizeof (float));
return (0);
}
