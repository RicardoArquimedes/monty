#include "monty.h"
/**
 * push_funct - call the function to add node
 * @stack: pointer to head of stack
 * @number_line: number of the line in the bytecode
 * Return: number of nodes
 */
void push_funct(stack_t **stack, unsigned int number_line)
{
	(void)number_line;

	if (global_line.argument != NULL)
	{
		add_dnodeint(stack, atoi(global_line.argument));
		return;
	}
	dprintf(STDERR_FILENO, "L%d: usage: push integer\n",
		global_line.number_line);
	exit(EXIT_FAILURE);
}
