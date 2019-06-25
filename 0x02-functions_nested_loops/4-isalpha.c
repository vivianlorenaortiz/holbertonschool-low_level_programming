#include "holberton.h"

/**
 * _isalpha - check for alphabetic charter.
 *@c: Is a integer
 * Return: Always 0.
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	else
		return (0);
}
