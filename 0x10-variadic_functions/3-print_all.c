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
	else
		printf("%s", string);
}
void print_all(const char * const format, ...)
{
	va_list valist;
	int i, a;
	char *s = ", ";
	print_t valu[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_start(valist, format);
	i = 0;
	while (format[i] != '\0')
	{


		a = 0;
		while (valu[a].t)
		{
			if(format[i] == valu[a].t[0])
			{
				valu[a].f(valist);
				if (i < 3)
				printf("%s", s);
			      
			}
			a++;

		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
