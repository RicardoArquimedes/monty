#include "monty.h"
/**
 * get_funct - Pointer to function
 * acording input opcode
 * @opcode: String with name of the opcode
 *
 * Return: Void
 */
void (*get_funct(char *opcode))(stack_t **stack, unsigned int number_line)
{
	instruction_t ins_code[] = {
		{"push", push_funct},
		{"pall", pall_funct},
		{"pint", pint_funct},
		{"pop",  pop_funct},
		{"swap", swap_funct},
		{"add", add_funct},
		{"nop", nop_funct},
		{"sub", sub_funct},
		{"#", comment_funct},
		{NULL, NULL}
	};
	int i = 0, line = 0;
	char *code = NULL;

	i = 0;

	while (ins_code[i].opcode)
	{
		if (strcmp(opcode, ins_code[i].opcode) == 0)
		{
			return (ins_code[i].f);
		}
		i++;
	}
	line = global_line.number_line, code = global_line.opcode;
	dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", line, code);
	exit(EXIT_FAILURE);
}
