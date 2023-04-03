#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 *
 * @accept: char array to check bytes
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k;

	while (s[i] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				j++;
				break;
			}
			k++;
		}
		if (accept[k] == '\0')
			break;
		i++;
	}
	return (j);
}
