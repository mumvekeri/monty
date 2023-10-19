#include "monty.h"
extern int atoi (const char *__nptr);
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

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		free(new);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	split_buffer = _split(buff, " ");

	value = _atoi(split_buffer[1], line_num);

	new->n = value;
	new->prev = NULL;
	new->next = *top;

	if (*top)
		(*top)->prev = new;
	*top = new;
	free(split_buffer);
}
