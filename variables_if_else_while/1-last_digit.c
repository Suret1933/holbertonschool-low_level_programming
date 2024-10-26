#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to n and checks its last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Calculate the last digit */
	last_digit = n % 10;

	/* Print the output */
	printf("Last digit of %d is %d", n, last_digit);
	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
