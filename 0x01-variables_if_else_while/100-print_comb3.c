#include<stdio.h>

/**
 * main - main body
 *
 * Return: 0
 */
int main(void)
{
	int m;
	int n;

	for (n = m + 1; n < 58; n++)
	{
		if (m != 48 || n != 49)
		{
			putchar(44);
			putchar(32);
		}
		putchar(m);
		putchar(n);
	}
	putchar('\n');
	return (0);
}
