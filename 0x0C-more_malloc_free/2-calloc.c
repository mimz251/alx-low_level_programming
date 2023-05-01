#include "main.h"
#include <stdlib.h>
/**
* *_memset -  memory filled with a constant byte
* @p: filled memory area
* @q: copied char
* @r: number of times to copy q
*
* Return: pointer to the memory area p
*/
char *_memset(char *p, char q, unsigned int r)
{
	unsigned int i;

	for (i = 0; i < r; i++)
	{
		p[i] = q;

	}

	return (p);

}

/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element
*
* Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *ptr;



	if (nmemb == 0 || size == 0)

		return (NULL);



	ptr = malloc(size * nmemb);



	if (ptr == NULL)

		return (NULL);



	_memset(ptr, 0, nmemb * size);



	return (ptr);

}
