#include "monty.h"

/**
 * remove_top - removes the top element of the stack
 * @stack: pointer to the top of the stack
 * @line: line number of the opcode
 */
void remove_top(stack_t **stack, unsigned int line)
{
	stack_t *temp = *stack;

	if (!*stack || !stack)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->next)
	{
		*stack = temp->next;
		(*stack)->prev = NULL;
		free(temp);
	}
	else
	{
		free(*stack);
		*stack = NULL;
	}
}
