#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array
 * @min: the start
 * @max: the end
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *array;
	int a, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		array[a] = min + a;
	return (array);
}
