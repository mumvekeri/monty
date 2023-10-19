#include "monty.h"
/**
 * stack_sub - subtracts the top element of the stack
 * from the second top element
 * @stack: nodes
 * @line: file line number
 */

void stack_sub(stack_t **stack, unsigned int line)
{
	stack_t *head = *stack, *temp;

	if (!head || !head->next)
	{
		fprintf(stderr, "L%i: can't sub, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	/* subtract the top element from the second top element */
	head->next->n -= head->n;

	/* remove the top element and free it */
	temp = head;
	head = head->next;
	free(temp);

	/* update the stack pointer */
	*stack = head;
}
