#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: nodes
 * @line: file line number
 */

void stack_add(stack_t **stack, unsigned int line)
{
	stack_t *head = *stack, *temp;

	if (!head || !head->next)
	{
		fprintf(stderr, "L%i: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	/* add the values of the top two nodes */
	head->next->n += head->n;

	/* remove the top node and free it */
	temp = head;
	head = head->next;
	free(temp);

	/* update the stack pointer */
	*stack = head;
}
