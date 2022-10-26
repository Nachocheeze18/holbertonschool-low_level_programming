#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * sum_them_all - main
 * @n: var
 *
 * Return: returns
 */

int sum_them_all(const unsigned int n, ...)
{
	int x = 0;
	unsigned int i;
	va_list num;

	if (n == 0)
	{
	return (0);
	}

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
	x = x + va_arg(num, int);
	}

	va_end(num);

	return (x);
}
