#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * positive_or_negative - Prints if number is positive,zero or negative.
 * Return: void
 *
 */
void positive_or_negative(int n)
{

        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {
                printf("%d is negative\n", n);
        }
}                             
