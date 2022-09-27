#include "main.h"

/**
 * print_square - prints a size by size square
 * @size: an int given by main
 *
 * Description: Uses headers to link and a nested loops to achieve goal
 * Return: void. no return.
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
