#include "main.h"

/**
 * _islower - main block
 *
 * @c : character to check the case
 *
 * Return: 0
 *
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
