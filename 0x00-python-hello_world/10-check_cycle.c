#include "lists.h"

/**
 * check_cycle - function that checks if a singly linked lists has a cycle
 * @list: the list to check
 * Return: 0 no cycle, 1 cicle
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	while ((slow && fast && fast->next))
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}

	return (0);
}
