#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Start point
 * Description: 'Print all possible different combinations of three digits'
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i < '9'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			for (k = '0'; k < '9'; k++)
			{
				if ((j != i) != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
