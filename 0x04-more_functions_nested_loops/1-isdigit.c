#include "main."

/**
 * _isdigit - checks for characters that are digits
 * @c: character 
 *
 * Return: 0 or 1
 */


int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
