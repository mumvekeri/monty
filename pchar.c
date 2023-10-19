#include "monty.h"
/**
 * pchar - prints the char at the top of the stack, followed by a new line
 * @stack: nodes
 * @line: file line number
 */

void pchar(stack_t **stack, unsigned int line)
{
	stack_t *head = *stack;
	int value;

	if (!head)
	{
		fprintf(stderr, "L%i: can't pchar, stack empty\n", line);
		exit(EXIT_FAILURE);
	}

	value = head->n;

	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%i: can't pchar, value out of range\n", line);
		exit(EXIT_FAILURE);
	}

	/* print the char at the top of the stack */
	printf("%c\n", value);
}
