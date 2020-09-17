#include "monty.h"

/**
 * swap_node - changes two nodes
* @stack: Pointed to head of a list
 *
* Return: void
 */
void swap_node(stack_t *stack)
{
	stack_t *tmp = stack;
	int data = 0;

	data = tmp->n; /* save n  in data*/
	tmp->n = (tmp->next)->n;
	(tmp->next)->n = data;
}
