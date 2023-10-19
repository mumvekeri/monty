#include "monty.h"

/**
 * exchange - exchanges the top two elements of the stack
 * @head: double pointer to the head of the stack
 * @line: the number of the line being executed
 */
void exchange(stack_t **head, unsigned int line)
{
	stack_t *temp;

	/* check if the stack contains less than two elements */
	if (!head || !*head || !(*head)->next)
	{
		/* print the error message and exit with failure */
		fprintf(stderr, "L%d: can't exchange, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	/* exchange the top two elements of the stack */
	temp = (*head)->next;
	(*head)->next = temp->next;
	temp->next = *head;
	*head = temp;
}
