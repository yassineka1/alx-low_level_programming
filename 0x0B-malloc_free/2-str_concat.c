#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates 2 strings
 *@s1: First string
 *@s2: Second string
 *Return: pointer to the newly allocated space in memory
 *	NULL if concatenation fails
 */

char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int i, concat = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	str_concat = malloc(sizeof(char) * length);

	if (str_concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_concat[concat++] = s1[i];

	for (i = 0; s2[i]; i++)
		str_concat[concat++] = s2[i];

	return (str_concat);
}
