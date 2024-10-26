#include "main.h"

/**
 * _islower - Küçük harf olup olmadığını kontrol eder
 * @c: Kontrol edilecek karakter
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
