#include "lists.h"

/**
 * print_listint - function
 * @h: list var
 * Return: node count
 */

size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
	num++;
	printf("%d\n", h->n);
	h = h->next;
}

return (num);
}
