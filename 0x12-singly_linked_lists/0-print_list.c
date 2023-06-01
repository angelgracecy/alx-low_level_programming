#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
printf("[");
while
	(current != NULL)
{
if
	(current->str != NULL)
{
printf("%s", current->str);
}
else
{
printf("[0] (nil)");
}
count++;
current = current->next;
if
(current != NULL)
{
printf(", ");
}
}
printf("]\n");
return (count);
}
