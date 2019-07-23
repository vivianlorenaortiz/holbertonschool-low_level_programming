#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: str len
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		return (len + _strlen(s + 1));
	}
	return (len);
}
/**
 * new_dog -  function that creates a new dog
 * @name: dog
 * @age: dog
 * @owner: dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nname;
	int sln = _strlen(name);
	int slo = _strlen(owner);
	int s, j;

	nname = malloc(sizeof(dog_t));
	if (nname == NULL)
		return (NULL);
	nname->name = malloc(sizeof(char) * sln + 1);
	if (nname->name == NULL)
	{
		free(nname);
		return (NULL);
	}
	for (s = 0; s <= sln; s++)
		nname->name[s] = name[s];
	nname->age = age;
	nname->owner = malloc(sizeof(char) * slo + 1);
	if (nname->owner == NULL)
	{
		free(nname->name);
		free(nname);
		return (NULL);
	}
	for (j = 0; j <= slo; j++)
		nname->owner[j] = owner[j];
	return (nname);
}
