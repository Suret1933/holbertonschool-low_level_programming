#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to be modified.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;
int j;
/* Array of word separators */
char separators[] = " \t\n,;.!?\"(){}";
/* Capitalize first character if it's lowercase */
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
/* Traverse the string */
while (str[i] != '\0')
{
/* Check if current char is a separator */
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i] == separators[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
break;
}
}
i++;
}
return (str);
}
