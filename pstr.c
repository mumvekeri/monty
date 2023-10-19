#include "monty.h"
/**
 * pstr - prints the string starting at the top of
 * the stack, followed by a new line
 * @stack: nodes
 * @line: file line number
 */

void pstr(stack_t **stack, unsigned int line)
{
	stack_t *head = *stack;
	int value;

	(void)line;

	/* print the string until the end of the stack or a non-ascii value */
	while (head)
	{
		value = head->n;

		if (value <= 0 || value > 127)
			break;

		printf("%c", value);
		head = head->prev;
	}

	/* print a new line */
	printf("\n");
}
