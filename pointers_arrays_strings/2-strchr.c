#include "main.h"
#include <stddef.h>  /* Include for NULL */

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 * Return: pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);  /* Return the pointer to the null terminator */
	return (NULL);  /* Return NULL if character is not found */
}

