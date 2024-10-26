#include <stdio.h>

/**
 * main - Prints all two digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 10; num < 100; num++)
	{
		putchar((num / 10) + '0'); /* Onlar basamağını yazdır */
		putchar((num % 10) + '0'); /* Birler basamağını yazdır */
		if (num != 99)
		{
			putchar(' '); /* Sayılar arasında boşluk ekle */
		}
	}
	putchar('\n'); /* Yeni satır ekle */
	return (0);
}
