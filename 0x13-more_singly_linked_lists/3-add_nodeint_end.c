#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: list var
 * @n: var
 * Return: node count
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *final, *end;

final = malloc(sizeof(listint_t));
if (final == NULL)
{
return (NULL);
}

final->n = n;
final->next = NULL;

if (*head == NULL)
{
*head = final;
}
else
{
end = *head;
while (end->next != NULL)
{
end = end->next;
}
end->next = final;
}
return (end);
}
