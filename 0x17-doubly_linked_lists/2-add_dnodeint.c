#include "lists.h"
/**
 * add_dnodeint - add a new node
 * @head: head of node
 * @n: data to write
 * Return: returns a new dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	current = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current;
	new_node->prev = NULL;
	if (current != NULL)
	{
		current->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
