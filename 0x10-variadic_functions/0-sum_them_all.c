#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all args
 * @n: num of args
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, unsigned int);
	}
	va_end(num);

	return (sum);
}
