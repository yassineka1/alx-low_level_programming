#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: the first occurrence of the substring
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *ptrh = haystack;
		char *ptrn = needle;

		while (*haystack && *ptrn && *haystack == *ptrn)
		{
			haystack++;
			ptrn++;
		}
		if (!*ptrn)
			return (ptrh);
	}
	return (0);
}
