#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv;  /* We are not using argv, so we mark it as unused */
_putchar(argc - 1 + '0');  /* Print the number of arguments */
_putchar('\n');  /* Newline after printing the number */
return (0);
}
