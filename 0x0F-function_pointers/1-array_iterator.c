#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - main
 * @array: var
 * @size: var
 * @action: var
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
