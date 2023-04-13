#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - Concatenates two strings
 *@s1: First string
 *@s2: Second string
 *@n: Number of bytes
 *Return: NULL if funtion fails or Pointer if sucess
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int length = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;

	nconcat = malloc(sizeof(char) * (length + 1));

	if (nconcat == NULL)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
		nconcat[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		nconcat[length++] = s2[i];

	nconcat[length] = '\0';

	return (nconcat);
}
