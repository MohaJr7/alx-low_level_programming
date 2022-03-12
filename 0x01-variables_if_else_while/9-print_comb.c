#include<stdio.h>

/**
 * main - main body
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 48)
		{
			putchar(44);
			putchar(32);
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
