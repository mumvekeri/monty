#include "monty.h"
/**
 * _split - a function to split strings
 * @str: string to be splitted
 * @s: string pointer
 * Return: character
 */

char **_split(char *str, char *s)
{
	char *a, **split_str;
	int i = 0;

	a = strtok(str, s);
	split_str = (char **)_calloc(100, sizeof(char *));

	if (!split_str)
	{
		free(split_str);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while (a)
	{
		split_str[i] = a;
		a = strtok(NULL, s);
		i++;
	}
	return (split_str);
}

