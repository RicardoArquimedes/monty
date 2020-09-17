#include "monty.h"

/**
 * pop_funct - call the function to delete node at beginning (top stack)
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 * Return: number of nodes in the linked list, 0 if empty
 */
void pop_funct(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (stack && *stack)
	{
		delete_dnodeint_at_index(stack, 0);
		return;
	}
	dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n",
		global_line.number_line);
	exit(EXIT_FAILURE);
}
