#include "main.h"

/**
 * main - print the alphabet 10 times.
 *
 * Return:0 on succcess
 */
void print_alphabet_x10(void)
{	
	int i;
	char c;
	for (i = '0'; i <= '9'; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
	
		{
			_putchar(c);
		}
		_putchar('\n');
}
}
