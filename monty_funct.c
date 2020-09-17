#include "monty.h"
/**
 * script_monty - This function split the input file in line  and arguments
 * and later invoke the function acording opcode input.
 * @input: File to read.
 *
 * Return: Void
 */
void script_monty(FILE *input)
{
	char *line = NULL;
	char *argument = NULL;
	char str[CHARMAX];
	stack_t *head = NULL;
	int i = 1, j = 0;

	global_line.file_i = input;
	global_line.opcode = NULL;
	line = fgets(str, CHARMAX, input);
	while (!feof(input))
	{

		argument = strtok(line, " \t\n");
		j = 0;
		while (argument && j < 2)
		{
			if (j == 0)
			{
				if (argument[0] == '#')
				{
					global_line.opcode = "#";
					i--;
				}
				else
					global_line.opcode = argument;
				global_line.number_line = i;
			}
			if (j == 1)
				global_line.argument = argument;
			argument = strtok(NULL, " \t\n"), j++;
		}
		if (global_line.opcode)
			get_funct(global_line.opcode)(&head, global_line.number_line);
		global_line.argument = NULL;
		global_line.opcode = NULL, i++;
		line = fgets(str, CHARMAX, input);
	}
	free_dlistint(head), fclose(input);
}

/**
 * _isdigit - Checked if a character is a digit character
 * Return: c if c is a digit (1) otherwise
*/
int _isdigit(void)
{

	int i;

	i = 0;
	if (global_line.argument[0] == '-')
		i++;
	while (global_line.argument[i])
	{
		if (!isdigit(global_line.argument[i]))
			return (0);
		i++;
	}
	return (1);
}


/**
 * dlistint_len - Function that count all the elements of a dlistint_t list
 * @h: Pointed to head of a list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const stack_t *h)
{
	const stack_t *tmp = h;
	size_t nodes = 0;

	if (tmp == NULL)
	{
		return (0);
	}

	while (tmp)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
