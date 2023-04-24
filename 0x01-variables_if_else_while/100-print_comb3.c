#include <stdio.h>
/**
 * main - start point
 * Description: print all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int g, d;

	for (g = '0'; g < '9'; g++)
	{
		for (d = g + 1; d <= '9'; d++)
		{
			if (d != g)
			{
				putchar(g);
				putchar(d);
				if (g == '8' && d == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
