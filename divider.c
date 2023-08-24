#include "monty.h"

/**
 * f_divide - it divides the top two elements of the stack.
 *
 * @head: stacks' head.
 * @counter: the line_number
 *
 * Return: Null...
*/
void f_divide(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int leng = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		leng++;
	}

	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n / h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
