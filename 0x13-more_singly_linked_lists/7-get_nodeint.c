#include "lists.h"
/**
 * get_nodeint_at_index - return nth node of list
 * @head: first node
 * @index: index of node
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp &&  n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp ? temp : NULL);
}
