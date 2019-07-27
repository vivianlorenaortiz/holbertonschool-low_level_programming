#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - function thats prints strings.
 *@separator: is the string to be printed between numbers
 *@n: Is the number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *num;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, char *);
		if (num == NULL)
			printf("(nil)");
		else
			printf("%s", num);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
