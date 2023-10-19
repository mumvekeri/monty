#include "monty.h"
/**
 * stack_mod - computes the rest of the division of the second top
 * element by the top element
 * @stack: nodes
 * @line: file line number
 */

void stack_mod(stack_t **stack, unsigned int line)
{
	stack_t *head = *stack, *temp;

	if (!head || !head->next)
	{
		fprintf(stderr, "L%i: can't mod, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	if (head->n == 0)
	{
		fprintf(stderr, "L%i: division by zero\n", line);
		exit(EXIT_FAILURE);
	}

	/* compute the modulus of the second top element by the top element */
	head->next->n %= head->n;

	/* remove the top element and free it */
	temp = head;
	head = head->next;
	free(temp);

	/* update the stack pointer */
	*stack = head;
}
