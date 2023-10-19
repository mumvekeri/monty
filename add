#include "monty.h"
/**
 * sum_top - sums the top two nodes of the stack
 * @s: nodes
 * @ln: file line number
 */

void sum_top(stack_t **s, unsigned int ln)
{
	stack_t *head = *s, *temp;

	if (!head || !head->next)
	{
		fprintf(stderr, "L%i: can't sum, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}

	/* sum the values of the top two nodes */
	head->next->n += head->n;

	/* remove the top node and free it */
	temp = head;
	head = head->next;
	free(temp);

	/* update the stack pointer */
	*s = head;
}
