#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *op_add - sum of a and b
 *@a: integer
 *@b: integer
 *Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - diference of a and b
 *@a: integer
 *@b: integer
 *Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - product  of a and b
 *@a: integer
 *@b: integer
 *Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - division of a and b
 *@a: integer
 *@b: integer
 *Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - remainder of a and b
 *@a: integer
 *@b: integer
 *Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
