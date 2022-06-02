#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current;
	current = head;
	if (head == NULL)
		return (NULL);
	while (current)
	{
		if (current->next >= current && current->next != NULL)
			return (current->next);
	current = current->next;
	}
	return (NULL);
}
