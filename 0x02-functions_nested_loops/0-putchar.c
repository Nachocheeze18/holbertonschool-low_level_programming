#include <stdio.h>
/**
 * print _putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{

		_putchar(*sh);
		sh++;

	}
	_putchar('\n')

	return (0);

}
