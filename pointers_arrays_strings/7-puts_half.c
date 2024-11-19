#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int length = 0, i, start;
/* Calculate the length of the string */
while (str[length] != '\0')
length++;
/* Determine the starting index for the second half */
if (length % 2 == 0)
start = length / 2;
else
start = (length - 1) / 2 + 1;
/* Print the second half of the string */
for (i = start; i < length; i++)
_putchar(str[i]);
_putchar('\n');
}
