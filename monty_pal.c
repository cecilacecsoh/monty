#include "monty.h"

/**
 * f_pall - it prints the stack
 *
 * @head: stack head
 * @counter: no used
 * 
 * Return: Null ..
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *hed;
	(void)counter;

	hed = *head;
	if (hed == NULL)
		return;

	while (hed)
	{
		printf("%d\n", hed->n);
		hed = hed->next;
	}
}
