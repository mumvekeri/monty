#include "monty.h"

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: array
 * @size: size
 * Return: void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	for (; index < (nmemb * size); index++)
		ptr[index] = 0;

	return (ptr);
}

