#include "monty.h"
/**
 * pint_funct - call the function to prints the values
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 * Return: number of nodes in the linked list, 0 if empty
 */
void pint_funct(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (stack && *stack)
		print_head(*stack);
	else
	{
		fclose(global_line.file_i);
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n",
			global_line.number_line);
		exit(EXIT_FAILURE);
	}
}
