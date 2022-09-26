#include "main.h"

/**
 * _isupper - define if a character is uppercase.
 *
 * Description: Prints the alphabet with _putchar
 * @c: character
 * Return:void
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{	
		return (1);
	}
	return (0);
}
