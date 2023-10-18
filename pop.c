#include "monty.h"

/**
 * remove_top - removes the top element of the stack
 * @top: pointer to the top of the stack
 * @line: line number of the opcode
 */
void remove_top(stack_t **top, unsigned int line)
{
	stack_t *temp;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't remove_top, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	temp = *top;

	*top = (*top)->next;

	if (*top != NULL)
	{
		(*top)->prev = NULL;
	}
	free(temp);
}
