#include "monty.h"
/**
 * rotl - rotates the stack to the top
 * @stack: nodes
 * @line_number: file line number
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *tail;

	(void)line_number;

	/* check if the stack has at least two elements */
	if (!head || !head->prev)
		return;

	/* find the tail of the stack */
	tail = head->prev;

	/* rotate the stack to the top */
	head->prev = tail->prev;
	tail->prev->next = head;
	tail->prev = NULL;
	tail->next = head;
	head->next = tail;

	/* update the stack pointer */
	*stack = head;
}
