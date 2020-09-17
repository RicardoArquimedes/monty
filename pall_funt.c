#include "monty.h"

/**
 * pall_funct - call the function to print elements of linked listng
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 * Return: number of nodes in the linked list, 0 if empty
 */
void pall_funct(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	print_dlistint(*stack);
}
