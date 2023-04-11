#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string (duplicate of str)
 *@str: string to be duplicated
 *Return: NULL if str=NULL or insufficient memory
 *        Pointer to the duplicated string if sucess
 */

char *_strdup(char *str)
{
	char *dup;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[length] = '\0';

		return (dup);
}
