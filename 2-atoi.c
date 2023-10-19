#include "monty.h"

/**
 * _atoi - function converts a string to integer
 * @str: string to convert
 * @line_number: file line number
 * Return: int
 */

int _atoi(char *str, unsigned int line_number)
{
	int num = 0, i = 0;
	unsigned int valid_nums = 0;

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		valid_nums++;
		i++;
	}

	if (valid_nums != strlen(str) - 1)
	{
		fprintf(stderr, "L%i: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	return (num);
}
