#include <unistd.h>

/**
 * main - '_putchar' ifadesini yazdırır
 *
 * Return: 0 her şey yolunda ise
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
