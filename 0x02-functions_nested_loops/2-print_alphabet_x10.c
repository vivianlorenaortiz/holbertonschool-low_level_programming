#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int alfa;
 int a = 0;

while (a < 10)
{
   a++;
for (alfa = 97; alfa < 123; alfa++)
{
 _putchar (alfa);;
}
 _putchar ('\n');
}
}
