#include "main.h"
/**
 * print_sign - prints + if n is greater than 0
 * prints 0 if n is zero prints - if n is less than zero
 *
 * @n:carrier variable
 *
 * Return 1 if n>0, 0 if n==0, -1 if n<0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
	_putchar(0);

	return (0);
}
