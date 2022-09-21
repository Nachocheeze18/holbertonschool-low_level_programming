#include <stdio.h>
/**
 * main - print _putchar. 
 *
 * Return: 0 on success
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{

		putchar(*sh);
		sh++;

	}
	putchar('\n');

	return (0);

}
