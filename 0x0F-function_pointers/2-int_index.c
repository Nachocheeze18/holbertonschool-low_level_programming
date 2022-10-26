#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - main
 * @array: var
 * @size: var
 * @cmp: var
 * Return: return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
if (size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}
