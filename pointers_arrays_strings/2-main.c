#include "main.h"
#include <stdio.h>

/**
 * main - Tests the _strchr function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f;

	/* Test case 1: Searching for ',' */
	f = _strchr(s, ',');
	if (f != NULL)
	{
		printf("Found: %s\n", f);
	}

	/* Test case 2: Searching for 'a' */
	f = _strchr(s, 'a');
	if (f != NULL)
	{
		printf("Found: %s\n", f);
	}

	/* Test case 3: Searching for null character '\0' */
	f = _strchr(s, '\0');
	if (f != NULL)
	{
		printf("Found: %s\n", f);
	}

	return (0);
}

