#include "lists.h"

void __attribute__((constructor)) tortoise(void);

/**
 * tortoise - Prints before the main function is executed
 * Return: Void
 */

void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
