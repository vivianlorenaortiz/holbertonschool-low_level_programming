#include "holberton.h"

/**
 * _islower - function that cheks for lowercase character.
 * @c: Is a integer
 * Return: Always 0.
 */
int _islower(int c)
{

	if  (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
