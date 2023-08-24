#include "monty.h"
/**
 * f_modify - this computes the rest of the division of the 2nd
 *		top element of the stack by the top element of the stack.
 *
 * @head: the stack head
 * @counter: a line_number
 *
 * Return: NULL ...
*/
void f_modify(stack_t **head, unsigned int counter)
{
	stack_t *hed;
	int leng = 0, aux;

	hed = *head;
	while (hed)
	{
		hed = hed->next;
		len++;
	}

	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	hed = *head;
	if (hed->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = hed->next->n % hed->n;
	hed->next->n = aux;
	*head = hed->next;
	free(hed);
}
