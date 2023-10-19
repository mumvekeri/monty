#include "monty.h"
/**
 * rotr - rotates the stack to the bottom
 * @stack: nodes
 * @line_number: file line number
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *tail;

	(void)line_number;

	/* check if the stack has at least two elements */
	if (!head || !head->prev)
		return;

	/* find the tail of the stack */
	tail = head->prev;

	/* rotate the stack to the bottom */
	tail->prev->next = NULL;
	tail->prev = head;
	tail->next = head->next;
	head->next->prev = tail;
	head->next = NULL;
	head->prev = tail;

	/* update the stack pointer */
	*stack = tail->next;
}
