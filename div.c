#include "monty.h"
/**
 * stack_div - divides the second top element of the
 * stack by the top element
 * @stack: nodes
 * @line: file line number
 */

void stack_div(stack_t **stack, unsigned int line)
{
	stack_t *head = *stack, *temp;

	if (!head || !head->next)
	{
		fprintf(stderr, "L%i: can't div, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	if (head->n == 0)
	{
		fprintf(stderr, "L%i: division by zero\n", line);
		exit(EXIT_FAILURE);
	}

	/* divide the second top element by the top element */
	head->next->n /= head->n;

	/* remove the top element and free it */
	temp = head;
	head = head->next;
	free(temp);

	/* update the stack pointer */
	*stack = head;
}
