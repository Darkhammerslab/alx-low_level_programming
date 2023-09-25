#include "lists.h"
/**
 * listint_len - return number of elements in a linked list
 * @h: linked list type
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
