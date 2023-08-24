#include "search_algos.h"

/**
 * linear_search - Linearly searches for a value in an array.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the found value, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL) {
        return -1;
    }
    
    unsigned long i; // Use unsigned long for iteration and printing
    
    for (i = 0; i < size; ++i) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return (int)i;
        }
    }
    
    return -1;
}
