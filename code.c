#include "monty.h"
/**
 * find_opcode - finds a valid opcode in the line
 * Return: void
 */

void (*find_opcode(void))(stack_t **, unsigned int)
{
	int i = 0, j;
	int match_opcode;
	int opcode_length;

	instruction_t opcodes[] = {
		{"swap", exchange},
		{"pop", remove_top},
		{"pall", stack_pall},
		{"push",  add_node},
		{"nop", stack_nop},
		{"pint", pint},
		{"#", comment},
		{"pchar", pchar},
		{"add", stack_add},
		{"sub", stack_sub},
		{"div", stack_div},
		{"mod", stack_mod},
		{"mul", stack_mul},
		{NULL, NULL}
	};
	/* We check the opcode */
	while (opcodes[i].opcode)
	{
		j = 0;
		match_opcode = 1;
		opcode_length = strlen(opcodes[i].opcode);
		while (j < opcode_length)
		{
			if (opcodes[i].opcode[j] != buff[j])
			{
				match_opcode = 0;
				break;
			}
			j++;
		}
		if (match_opcode == 1 && (buff[j] == '\n'
			|| buff[j] == ' ' || buff[j] == '\0'))
			break;
		i++;
	}
	return (opcodes[i].f);
}
