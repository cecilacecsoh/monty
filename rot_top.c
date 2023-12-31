#include "monty.h"

/**
  *rot_top - it  rotates the stack to the top
  *
  *@head: the   stack head
  *@counter: a line_number
  *
  *Return: NULL ..
 */
void rot_top(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
