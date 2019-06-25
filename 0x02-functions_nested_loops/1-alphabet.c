#include "holberton.h"

/**
 * print_alphabet - print the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int alfa;
for (alfa = 97; alfa < 123; alfa++)
{
_putchar (alfa);
}
_putchar ('\n');
}
