#include <stdio.h>
/**
 * main - start point
 * Description: 'Prints alphabet in upper and lower case'
 * Return: Always 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
