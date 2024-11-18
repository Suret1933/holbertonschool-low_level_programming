#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
while (*str != '\0')  /* While the current character*/
{
_putchar(*str);  /* Print the current character */
str++;           /* Move to the next character */
}
_putchar('\n');  /* Print a newline after the string */
}
