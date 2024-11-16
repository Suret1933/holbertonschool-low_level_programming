#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments.
 * @argv: An array of strings (arguments passed).
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)  /* Loop through all arguments */
{
printf("%s\n", argv[i]);  /* Print each argument on a new line */
}
return (0);
}
