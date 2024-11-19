#include "main.h"

/**
 * _strcpy - Copies a string from src to dest, including the null byte
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

/* Null byte dahil tüm karakterleri kopyala */
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0'; /* Null byte ekle */
return dest;
}
