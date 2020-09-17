#include "monty.h"

#include "monty.h"
/**
 * add_funct - adds the top two elements of the stack
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 * Return: EXIT_FAILURE or return to function
 */
void add_funct(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (dlistint_len(*stack) >= 2)
	{
		add_topnode(stack);
		return;
	}
	dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n",
			global_line.number_line);
	exit(EXIT_FAILURE);
}
