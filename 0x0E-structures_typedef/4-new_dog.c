#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Gets the string length
 * @str: The string to be checked
 *
 * Return: The string length
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src
 * including the terminating null byte,
 * to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy
 * @src: The source string
 *
 * Return: The pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Dog name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: The new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	dg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}

	dg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	dg->name = _strcopy(dg->name, name);
	dg->age = age;
	dg->owner = _strcopy(dg->owner, owner);

	return (dg);
}
