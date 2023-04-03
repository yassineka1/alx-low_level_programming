#include "main.h"

/**
 * _memcpy - Copy memory
 * @src : source
 * @dest: destination
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *destin = dest;
	const unsigned char *srce = src;

	for (i = 0; i < n; i++)
	{
		destin[i] = srce[i]
	}

	return (dest);
}
