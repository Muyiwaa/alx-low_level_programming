#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-a program that prints all possible combination of two
 * two-digits numbers
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int p, o;

	for (o = 0; o <= 98; o++)
	{
		for (p = 0; p <= 99; p++)
		{
			if (o < p)
			{
				putchar((o / 10) + '0');
				putchar((o % 10) + '0');
				putchar(' ');
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');

				if (o != 98 || p != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	putchar (0);
}
