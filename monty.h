#ifndef MONTY_H
#define MONTY_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <sys/stat.h>
char *buff;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void stack_pall(stack_t **head, unsigned int line);
void stack_push(stack_t **stack, int value, unsigned int line_number);
void print_top(stack_t **top, unsigned int line);
void remove_top(stack_t **top, unsigned int line);
int check_digit(char *str);
void exchange(stack_t **nodes, unsigned int line);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void free_all(void);
int _isdigit(int c);
void execute(char *file);
void (*find_opcode(void))(stack_t **, unsigned int);
void pall(stack_t **stack, unsigned int line_number);
void stack_nop(stack_t **stack, unsigned int line);
void pint(stack_t **stack, unsigned int line_number);
void add_node(stack_t **top, unsigned int line_num);
extern int atoi (const char *__nptr);
void sum_top(stack_t **s, unsigned int ln);
int _atoi(char *str, unsigned int line_number);
char **_split(char *str, char *s);
void stack_sub(stack_t **stack, unsigned int line);
void *_calloc(unsigned int nmemb, unsigned int size);
void clear_stack(stack_t *top);
int main(int argc, char *argv[]);
int run_opcode(char *line_content, stack_t **stack_head, unsigned int line_num, FILE *monty_file);
#endif
