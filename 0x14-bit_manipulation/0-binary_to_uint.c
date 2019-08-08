#include "holberton.h"
/**
 *binaty_to_uint - function that converts a binary number to an unsigned int.
 *@b: Is pointer to a string of 0 and 1 chars.
 *Return: The converti number, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned decimal = 0;
	unsigned i = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0';i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		decimal = decimal << 1;
		if (b[i] == '1')
			decimal += 1;
	}
	return (decimal);
}
