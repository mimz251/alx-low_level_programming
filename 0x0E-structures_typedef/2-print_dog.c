#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @g: struct dog to be printed
 */
void print_dog(struct dog *g)
{
	if (g == NULL)
		return;
	if (g->name == NULL)
		g->name = "(nil)";
	if (g->owner == NULL)
		g->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", g->name, g->age, g->owner);
}
