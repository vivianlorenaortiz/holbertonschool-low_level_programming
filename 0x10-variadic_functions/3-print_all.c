#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_c - print char
 *@c: char
 *Return: ntg
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 *print_i - print integer
 *@i: integer
 *Return: ntg
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 *print_f - print float
 *@f: float
 *Return: ntg
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 *print_s - print string
 *@s: string
 *Return:ntg
 */
void print_s(va_list s)
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
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list valist;
	char *s = "";

	va_start(valist, format);
	i = 0;
	while (format != NULL && format[i])
	{


		a = 0;
		while (valu[a].t != NULL)
		{
			if (format[i] == valu[a].t[0])
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
