#include "main.h"

/**
 * print-alphaiZZbet - print alphabet in lowercase.
 *
 * Return:0 on success
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

	return (0);
}
