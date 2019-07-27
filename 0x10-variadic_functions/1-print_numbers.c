#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - function thats prints numbers
 *@separator: is the string to be printed between numbers
 *@n: Is the number of integer passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int jay;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		jay = va_arg(valist, int);
		printf("%d", jay);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
