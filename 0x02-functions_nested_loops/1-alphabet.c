#include <main.h>

/**
 * main - print alphabet in lowercase.
 *
 * Return:0 on success
 */
int print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
