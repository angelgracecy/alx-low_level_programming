#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @src: source
 * @dest: destination
 * @n: unsigned int
 * Return: nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
nsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
