#include <stdio.h>
/**
 * main - start point
 * Description: 'print all number of base 16in lowercase'
 * Return: always 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (la = 'a'; la <= 'f'; la++)
		putchar(la);
	putchar('\n');

	return (0);
}
