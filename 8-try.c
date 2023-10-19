#include "monty.h"

/**
 * add_node - adds a node at the top of the stack
 * @top: pointer to the top node of the stack
 * @line_num: line number of the instruction in the file
 */

void add_node(stack_t **top, unsigned int line_num)
{
	char **split_buffer;
	int value;
	stack_t *new;

	split_buffer = _split(buff, " ");

	if (split_buffer == NULL)
	{
		fprintf(stderr, "Error: split failed\n");
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(split_buffer);
		exit(EXIT_FAILURE);
	}
	if (split_buffer[1] == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
		free(split_buffer);
		free(new);
		exit(EXIT_FAILURE);
	}
	value = _atoi(split_buffer[1], line_num);
	new->n = value;
	new->prev = NULL;
	new->next = *top;

	if (*top)
		(*top)->prev = new;
	*top = new;
	free(split_buffer);
}
