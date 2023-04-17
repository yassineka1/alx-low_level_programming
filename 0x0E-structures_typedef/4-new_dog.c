#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	int len, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	arr = (char *) malloc(len * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}

/**
 * new_dog - creates a new dog
 * @name: puppy's name
 * @age: puppy's age
 * @owner: puppy's owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;
	char *puppy_name, *puppy_owner;

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);

	puppy_name = _strdup(name);
	if (puppy_name == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy_owner = _strdup(owner);
	if (puppy_owner == NULL)
	{
		free(puppy_name);
		free(puppy);
		return (NULL);
	}
	puppy->name = puppy_name;
	puppy->age = age;
	puppy->owner = puppy_owner;
	return (puppy);
}
