#include "monty.h"

/**
 * mul - multiplies the second top element of the
 * stack with the top element
 * @stack: nodes
 * @line_number: file line number
 */

void stack_mul(stack_t **stack, unsigned int line)
{
	stack_t *head = *stack, *temp;

	if (!head || !head->next)
	{
		fprintf(stderr, "L%i: can't mul, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	/* multiply the second top element by the top element */
	head->next->n *= head->n;

	/* remove the top element and free it */
	temp = head;
	head = head->next;
	free(temp);

	/* update the stack pointer */
	*stack = head;
}
