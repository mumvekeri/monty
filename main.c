#include "monty.h"

/**
 * main - Entry Point for the program
 * @argc: Command line argument counter
 * @argv: Array of commandline arguments
 * Return: Always 0 or something
 */

int main(int argc, char **argv)
{
	(void)argv;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
