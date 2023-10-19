#include "monty.h"
/**
 * stack_pall - prints all the values on the stack
 * @head: double pointer to the head of the stack
 * @line: line number of the instruction
 */

void stack_pall(stack_t **head)
{
	stack_t *temp = *head;
	
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
/**
 * stack_push - Pushes an integer value onto the stack.
 * @stack: A pointer to a pointer to the top of the stack.
 * @value: The integer value to be pushed.
 * @line_number: The line number in the file.
 */

void stack_push(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;
	
	if (*stack)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
