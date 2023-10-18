#include "monty.h"
/**
 * stack_pall - prints all the values on the stack
 * @head: double pointer to the head of the stack
 * @line: line number of the instruction
 */
void stack_pall(stack_t **head, unsigned int line)
{
	stack_t *temp = *head;
	(void)line;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
