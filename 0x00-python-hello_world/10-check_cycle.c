#include "lists.h"

/**
 * check_cycle - checks for a cycle in a singly linked list
 * @list: points to the beginning of the node
 * Return: 0 for no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *val, *check;

	if (list == NULL || list->next == NULL)
	{
		return (0);
	}
	val = list;
	check = val ->next;

	while (val != NULL && check->next != NULL
		&& check->next->next != NULL)
	{
		if ( val == check)
		{
			return (1);
		}
		val = val->next;
		check = check->next->next;
	}
	return (0);
}

