#include <stdio.h>
/**
 * main - Start point
 * Description: 'Print alphabet in lowercase, followed by a new line'
 * Return: Always 0
 */

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if
			(la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');

	return (0);
}
