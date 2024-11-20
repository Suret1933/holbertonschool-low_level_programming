#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes to append from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i = 0;
/* Find the length of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}
/* Append at most n bytes from src to dest */
while (i < n && src[i] != '\0')
{
dest[dest_len] = src[i];
dest_len++;
i++;
}
/* Null-terminate the resulting string */
dest[dest_len] = '\0';
return (dest);
}
