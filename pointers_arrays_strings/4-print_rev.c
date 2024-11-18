#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
int length = 0;
/* Find the length of the string */
while (s[length] != '\0')
{
length++;
}
/* Print characters in reverse order */
for (length--; length >= 0; length--)
{
_putchar(s[length]);
}
_putchar('\n'); /* Print a new line */
}
