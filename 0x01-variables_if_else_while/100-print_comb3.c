#include <stdio.h>

/**
 * main - program that prints the numbers from 00 to 99
 * Numbers must be separated by ,followed by a space
 * Numbers should be printed in ascending order with 2 digits
 * You can only use the putchar function
 * Return: 0
 */

int main(void)

{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
