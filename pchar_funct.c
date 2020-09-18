#include "monty.h"
/**
 * pchar_funct - prints the char at the top of the stack
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 * Return: number of nodes in the linked list, 0 if empty
 */
void pchar_funct(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (stack && *stack)
		print_charlist(*stack);
	else
	{
		/*fclose(line_global.file_i);*/
		dprintf(STDERR_FILENO, "L%d: can't pchar, stack empty\n",
				global_line.number_line);
		exit(EXIT_FAILURE);
	}
}
