#include "monty.h"
#include <stdio.h>
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - runs the monty bytecode interpreter
* @argc: number of arguments
* @argv: monty bytecode file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	unsigned int j = 0;
	size_t len = 0;
	stack_t *head = NULL;
	char *line;
	FILE *fp;
	ssize_t read = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	bus.file = fp;
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read > 0)
	{
		line = NULL;
		read = getline(&line, &len, fp);
		bus.content = line;
		j++;
		if (read > 0)
		{
			run_opcode(line, &head, j, fp);
		}
		free(line);
	}
	clear_stack(head);
	fclose(fp);
return (0);
}
