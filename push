#include "monty.h"
/**
 * stack_pall - prints all the values on the stack
 * @head: double pointer to the head of the stack
 * @line: line number of the instruction
 */
void stack_pall(stack_t **head, unsigned int line)
{
	stack_t *temp;
	(void)line;

	if (head == NULL)
		return;

	temp = *head;

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
void stack_push(stack_t **stack, int value, unsigned int line_number)
{
	stack_t *new_node;

	(void)line_number;

	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new_node);
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (stack == NULL)
		*stack = new_node;

	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}
