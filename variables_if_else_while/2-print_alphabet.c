#include <unistd.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');  /* New line after printing the alphabet */

	return (0);
}
