#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/
void print_remaining_days(int month, int day, int year)
int main(void)
{
    int month;
    int day;
    int year;

    month = 02;
    day = 29;
    year = 2000;

    printf("Date: %d/%d/%d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}
~                  i
