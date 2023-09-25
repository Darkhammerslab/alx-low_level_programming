#include "lists.h"
/**
 * pop_listint - deletes head node of a list
 * @head: pointer to first element
 * Return: data inside deleted elements
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
