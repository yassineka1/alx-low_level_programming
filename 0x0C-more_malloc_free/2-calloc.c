#include "maih.h"
#include <stdlib>

/**
 *_calloc - allocates memory for array
 *@nmemb: Members
 *@size: number of bytes
 *Return: Pointer to allocated memory, NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	c = array;

	for (i = 0; i < (size * nmemb); i++)
		c[i] = '\0';
	return (array);
}
