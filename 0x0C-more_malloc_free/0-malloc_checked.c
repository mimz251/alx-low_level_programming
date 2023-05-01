#include "main.h"
#include <stdlib.h>
/**
* *malloc_checked - allocates memory using malloc
* @a: number of bytes to allocate
*
* Return:pointer to allocated memory
*/
void *malloc_checked(unsigned int a)
{
	void *ptr;

	ptr = malloc(a);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
