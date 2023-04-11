#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates an array of chars and init with a special one
 *@c: Character
 *@size: Size of array
 *Return: NULL if the function fails or Pointer if succeeded
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
