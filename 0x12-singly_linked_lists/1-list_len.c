#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @f: pointer to the list_t list
 *
 * Return: number of elements in f
 */
size_t list_len(const list_t *f)
{
	size_t n = 0;

	while (f)
	{
		n++;
		f = f->next;
	}
	return (n);
}
