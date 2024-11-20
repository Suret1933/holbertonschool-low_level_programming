#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char codes[] = "4433007711";
/* Iterate through the string */
for (i = 0; str[i] != '\0'; i++)
{
/* Check for letters to replace */
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = codes[j];
break;
}
}
}
return (str);
}
