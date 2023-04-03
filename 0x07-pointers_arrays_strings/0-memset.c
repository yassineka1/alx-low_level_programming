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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s)
}
