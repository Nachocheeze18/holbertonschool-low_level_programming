#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c:variable
 * Return:0 on success 1 on fail
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
