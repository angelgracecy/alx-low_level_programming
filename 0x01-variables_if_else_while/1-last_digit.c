#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Start point
 * Description: 'print last digit of a number'
 * Return: always 0
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (d > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, d);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
