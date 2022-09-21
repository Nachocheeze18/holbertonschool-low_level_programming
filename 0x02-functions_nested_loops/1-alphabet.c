#include <stdio.h>

/**
 * main - print alphabet in lowercase.
 *
 * Return:0 on success
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	return (0);
}
