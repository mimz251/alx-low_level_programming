#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @m:pointer to stuct dog
 * @name: name to add
 * @age:age to add
 * @owner:owner to add
 */
void init_dog(struct dog *m, char *name, float age, char *owner)
{
	if (m == NULL)
		m = malloc(sizeof(struct dog));
	m->name = name;
	m->age = age;
	m->owner = owner;
}
