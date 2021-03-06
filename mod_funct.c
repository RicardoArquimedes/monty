#include "monty.h"
/**
 * mod_funct - divides the second top element of the stack
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 * Return: EXIT_FAILURE or return to function
 */
void mod_funct(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (dlistint_len(*stack) >= 2)
	{
		mod_topnode(stack);
		return;
	}
	dprintf(STDERR_FILENO, "L%d: can't mod, stack too short\n",
			global_line.number_line);
	exit(EXIT_FAILURE);
}
