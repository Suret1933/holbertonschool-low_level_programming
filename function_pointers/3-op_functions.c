#include "3-calc.h"
/**
 * op_add - add 2 num
 * @a: 1st
 * @b: 2nd
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference between 2 num
 * @a: 1st
 * @b: 2nd
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply 2 num
 * @a: 1st
 * @b: 2nd
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide 2 num
 * @a: 1st
 * @b: 2nd
 * Return: result
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - give the modulo of 2 num
 * @a: 1st
 * @b: 2nd
 * Return: result
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
