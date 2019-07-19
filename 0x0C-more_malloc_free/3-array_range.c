#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - makes an array with numbers
 * @min: start number
 * @max: max num
 * Return: pointer to arr or null
 */
int *array_range(int min, int max)
{
 	int *s;
 	int sum;
 	int i;

 	if (min > max)
 		return (NULL);
 	sum = max - min;
 	s = malloc(sizeof(int) * (sum + 1));
 	if (s == NULL)
 		return (NULL);

 	for (i = 0; max >= i; i++)
 	{
 		s[i] = min++;
 	}
 	return (s);
}
