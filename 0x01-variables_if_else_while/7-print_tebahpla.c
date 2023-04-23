#include <stdio.h>
/**
 * main - start point
 * Description: 'print the lowercase alphabet in reverse'
 * Return: always 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);
	putchar('\n');
	return (0);
}
