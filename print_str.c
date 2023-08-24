#include "monty.h"

/**
 * print_str - it prints the string starting at the top of the stack,
 *		followed by a new line
 *
 * @head: a stack head
 * @counter: the line couner in number
 *
 * Return: Null ..
*/
void print_str(stack_t **head, unsigned int counter)
{
	stack_t *hed;
	(void)counter;

	hed = *head;
	while (hed)
	{
		if (hed->n > 127 || hed->n <= 0)
		{
			break;
		}
		printf("%c", hed->n);
		hed = hed->next;
	}
	printf("\n");
}
