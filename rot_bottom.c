#include "monty.h"

/**
 *rot_bottom- it rotates the stack to the bottom
 *
 *@head: the stack head.
 *@counter: a line number
 *
 *Return: Null.
 */
void rot_bottom(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	while (copy->next)
	{
		copy = copy->next;
	}

	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
