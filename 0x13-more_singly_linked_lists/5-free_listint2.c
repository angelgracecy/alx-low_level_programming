#include "lists.h"
/**
* free_listint2 - frees a linked list
* @head: pointer to the listint_t list to be freed
*/
void free_listint2(listint_t **head)
{
listint_t *current = *head;
listint_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}

*head = NULL;
}