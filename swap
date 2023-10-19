#include "monty.h"

/**
 * exchange - exchanges the top two nodes of the stack
 * @nodes: pointer to the stack
 * @line: file line number
 * Return: void
 */

void exchange(stack_t **nodes, unsigned int line)
{
	stack_t *first = *nodes;
	stack_t *second = *nodes;

	if (!*nodes || !nodes || !first->next)
	{
		fprintf(stderr, "L%i: can't exchange, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	first = first->next;
	first->prev = NULL;

	second->next = first->next;
	first->next = second;
	(first->next)->prev = first;

	*nodes = first;
}
