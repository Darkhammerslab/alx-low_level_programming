#include <stdlib.h>
#include "lists.h"
/**
 * list_len - return number of elements in list
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
