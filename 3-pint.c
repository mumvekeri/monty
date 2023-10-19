#include "monty.h"
/**
 * pint - prints the value at the top of the stack, followed by a new line
 * @stack: nodes
 * @line_number: file line number
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (!head)
	{
		fprintf(stderr, "L%i: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* print the value at the top of the stack */
	printf("%d\n", head->n);
}
