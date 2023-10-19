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
	stack_t *second;

	if (!first || !first->next)
	{
		fprintf(stderr, "L%i: can't exchange, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	second = first->next;
	first->next = second->next;
	if (second->next)
	{
		second->next->prev = first;
	}
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	*nodes = second;
}

