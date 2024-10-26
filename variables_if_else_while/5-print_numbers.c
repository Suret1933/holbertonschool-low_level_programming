#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0'); /* Sayıyı karaktere dönüştürüp yazdır */
	}
	putchar('\n'); /* Yeni satır ekle */
	return (0);
}
