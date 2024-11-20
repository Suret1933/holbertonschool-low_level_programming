#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
/* Copy src to dest up to n bytes */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
/* Pad with null bytes if src has fewer than n bytes */
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
