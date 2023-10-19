#include "monty.h"

/**
 * execute - program execute function :D
 * @file: variable char
 */

void execute(char *file)
{
	stack_t *top;
	int line_count = 1;
	size_t buffer_size = 0;
	FILE *stream;
	void (*opcode_action)(stack_t **, unsigned int);

	stream = fopen(file, "r+");
	if (!stream)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	top = NULL;

	while (getline(&buff, &buffer_size, stream) != -1)
	{
		opcode_action = find_opcode();
		if (opcode_action == NULL)
		{
			fprintf(stderr, "L%i: unknown instruction %s", line_count, buff);
			exit(EXIT_FAILURE);
		}
		opcode_action(&top, line_count);
		line_count++;
	}
	free(buff);
	clear_stack(top);
	fclose(stream);
}
