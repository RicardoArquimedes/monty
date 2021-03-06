#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#define CHARMAX 1000
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct line_s - line of file and its atributes
 * @opcode: the opcode
 * @argument: Argunment
 * @number_line: Line of the file
 * @file_i: file line
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct line_s
{
	FILE *file_i;
	char *opcode;
	char *argument;
	unsigned int number_line;
} line_t;

extern line_t global_line;

line_t global_line;
void print_dlistint(const stack_t *h);
void  print_head(const stack_t *h);
stack_t *add_dnodeint(stack_t **head, const int n);
void free_dlistint(stack_t *head);
void delete_dnodeint_at_index(stack_t **head, unsigned int index);
void script_monty(FILE *input);
void validate_opcode(void);
void (*get_funct(char *opcode))(stack_t **stack, unsigned int line_number);
void push_funct(stack_t **stack, unsigned int line_number);
void pall_funct(stack_t **stack, unsigned int line_number);
void pint_funct(stack_t **stack, unsigned int line_number);
void pop_funct(stack_t **stack, unsigned int line_number);
void add_funct(stack_t **stack, unsigned int line_number);
void nop_funct(stack_t **stack, unsigned int line_number);
void swap_funct(stack_t **stack, unsigned int line_number);
void sub_funct(stack_t **stack, unsigned int line_number);
void mul_funct(stack_t **stack, unsigned int line_number);
void div_funct(stack_t **stack, unsigned int line_number);
void mod_funct(stack_t **stack, unsigned int line_number);
void comment_funct(stack_t **stack, unsigned int line_number);
void pchar_funct(stack_t **stack, unsigned int line_number);
void swap_node(stack_t *stack);
void add_topnode(stack_t **stack);
void sub_topnode(stack_t **stack);
void mul_topnode(stack_t **stack);
void mod_topnode(stack_t **stack);
void div_topnode(stack_t **stack);
void print_charlist(const stack_t *h);
int _isdigit(void);
size_t dlistint_len(const stack_t *h);
#endif
