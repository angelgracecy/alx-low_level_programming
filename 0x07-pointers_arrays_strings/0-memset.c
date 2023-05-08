#include "main.h"
/**
 * _memset - fills the first n byte  of the area
 * @b: address of memory
 * s: size of memory
 * Return: Nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
