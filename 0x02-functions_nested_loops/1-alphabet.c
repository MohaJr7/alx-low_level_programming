#include "main"

/**
 * print_alphabet - main block
 *
 * Return: 0
 *
 */

viod print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
