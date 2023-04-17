#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - relase memory allocted to struct dog
 * @b:struct dog to free
 */
void free_dog(dog_t *b)
{
	if (b)
	{
		free(b->name);
		free(b->owner);
		free(b);
	}
}
