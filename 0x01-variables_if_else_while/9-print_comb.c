#include <stdio.h>
/**
 * main - start point
 * Description: 'print all possible combination of single digit numbers'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n + '0');
	if (n != 57)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
