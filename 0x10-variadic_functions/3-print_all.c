#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *character - print char
 *@c: char
 *Return: ntg
 */
void character(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 *integer - print integer
 *@i: integer
 *Return: ntg
 */
void integer(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 *floater - print float
 *@f: float
 *Return: ntg
 */
void floater(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 *str - print string
 *@s: string
 *Return:ntg
 */
void str(va_list s)
{
	char *string = va_arg(s, char *);

	if (string == NULL)
		printf("(nill)");
	printf("%s", string);
}
/**
 *print_all - prints anything.
 *@format: list of arguments
 *Return: void
 *
 */
void print_all(const char * const format, ...)
{
	int i, a;
	print_t valu[] = {
		{"c", character},
		{"i", integer},
		{"f", floater},
		{"s", str},
		{NULL, NULL}
	};
	va_list valist;
	char *s = "";

	va_start(valist, format);
	i = 0;
	while (format != NULL && format[i])
	{


		a = 0;
		while (valu[a].p != NULL)
		{
			if (format[i] == valu[a].p[0])
			{
				printf("%s", s);
				valu[a].f(valist);
				s = ", ";
				break;
			}
			a++;

		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
