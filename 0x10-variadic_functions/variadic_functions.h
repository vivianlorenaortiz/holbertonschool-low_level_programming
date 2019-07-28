#ifndef _VARIADIC__H_
#define _VARIADIC_H_

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_functions - Struct print_functions
 *
 * @type: The format to print
 * @f: The print function to use
 */
typedef struct print
{
	char *p;
	void (*f)(va_list);
} print_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list c);
void print_i(va_list i);
void print_f(va_list f);
void print_s(va_list s);

#endif /* _VARIADIC_FUNCTIONS_H_ */
