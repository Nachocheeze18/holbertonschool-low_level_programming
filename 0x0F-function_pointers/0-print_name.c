#include "function_pointers.h"

/**
 * print_name - main
 * @name: var
 * @f: var
 */

void print_name(char *name, void (*f)(char *))
{

	if (*name && *f)
	{
	f(name);
	}

}
