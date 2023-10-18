#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: double pointer to the head of the stack
 * @line_number: line number of the instruction
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *arg;
	int n;

	arg = strtok(NULL, "\n\t\r "); /* get the argument of push */
	if (arg == NULL || check_digit(arg) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE); /* exit with failure */
	}
	n = atoi(arg); /* convert argument to int */
	add_node(stack, n); /* add node to stack */
}

/**
 * pall - prints all the values on the stack
 * @stack: double pointer to the head of the stack
 * @line_number: line number of the instruction
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number; /* unused */

	temp = *stack; /* assign temp to point to stack */

		while (temp != NULL) /* iterate through stack */
		{
			printf("%d\n", temp->n); /* print node data */
			temp = temp->next; /* move to next node */
		}
}
