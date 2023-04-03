#include "main.h"

/**
 *_memset - Fills memory with a constant byte
 *@s: String array
 *@b: Constant byte
 *@n: number of bytes
 *Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s)
}
