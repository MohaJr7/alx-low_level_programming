#include "main.h"

/**
 * print_square - prints square of a certain height
 * @size : height of the square to be printed
 * Return: 0
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}