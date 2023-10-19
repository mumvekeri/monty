#include "monty.h"

/**
 * main - function executed first
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	execute(argv[1]);
	return (0);
}
