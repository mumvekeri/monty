#include "monty.h"
/**
* clear_stack - clears a doubly linked list
* @top: pointer to the top of the stack
*/
void clear_stack(stack_t *top)
{
	stack_t *temp;

	while (top)
	{
		temp = top->next;
		free(top);
		top = temp;
	}
}
