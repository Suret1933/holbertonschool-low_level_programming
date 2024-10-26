#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 *
 * Description: This function prints numbers from 0 to 9,
 * each followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
