#include "main.h"

/**
 * print_alphabet_x10 - Küçük harflerle alfabenin
 * 10 kez yazdırılmasını sağlar
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
