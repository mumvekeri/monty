#include "monty.h"
extern bus_t bus;

/**
* run_opcode - runs the opcode
* @stack_head: head of the linked list - stack
* @line_number: line number
* @monty_file: pointer to monty file
* @line_content: content of the line
* Return: no return
*/
int run_opcode(char *line_content, stack_t **stack_head,
		unsigned int line_num, FILE *monty_file)
{
	instruction_t displays[] = {
				{"pall", stack_pall},
				{"pop", remove_top},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *p;

	p = strtok(line_content, " \n\t");
	if (p && p[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (displays[i].opcode && p)
	{
		if (strcmp(p, displays[i].opcode) == 0)
		{	displays[i].f(stack_head, line_num);
			return (0);
		}
		i++;
	}
	if (p && displays[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_num, p);
		fclose(monty_file);
		free(line_content);
		clear_stack(*stack_head);
		exit(EXIT_FAILURE); }
	return (1);
}
