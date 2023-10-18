#include "monty.h"

/**
 * print_top - prints the value at the top of the stack
 * @top: pointer to the top of the stack
 * @line: line number of the opcode
 */
void print_top(stack_t **top, unsigned int line)
{
	if (top == NULL)
	{
		fprintf(stderr, "L%d: can't print_top, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}
