#include "holberton.h"
/**
 *swap_int - check the code for Holberton School students
 *@a: Integer to computer
 *@b: Integer to computer
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
