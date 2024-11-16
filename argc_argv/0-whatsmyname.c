#include <stdio.h>

/**
 * main - Prints the name of the program
 *
 * @argc: Argument count
 * @argv: Argument vector (array of arguments)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argc;  /* argc'yi kullanmadığımızı belirtmek için */
printf("%s\n", argv[0]);  /* Program adını yazdır */
return (0);  /* return ifadesi parantezle sarılmalı */
}
