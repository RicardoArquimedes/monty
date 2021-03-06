#include "monty.h"

/**
 * swap_funct - swaps the top two elements of the stack
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 * Return: EXIT_FAILURE or return to function
 */
void swap_funct(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (dlistint_len(*stack) >= 2)
	{
		swap_node(*stack);
		return;
	}
	dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n",
			global_line.number_line);
	exit(EXIT_FAILURE);
}
