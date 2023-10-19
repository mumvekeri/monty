#include "monty.h"

/**
 * print_top - prints the value at the top of the stack
 * @top: pointer to the top of the stack
 * @line: line number of the opcode
 */
void print_top(stack_t **top, unsigned int line)
{
	if (!*top || !top)
	{
		fprintf(stderr, "L%i: can't print_top, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*top)->n);
}
