#include "holberton.h"
/**
 *_isdigit - Checks for digit
 *@c: Integer to computer
 *
 *Description:  function that checks for a digit.
 *Return: 1
 */

int _isdigit(int c)

{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
