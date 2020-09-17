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

void add_topnode(stack_t **stack)
{
	stack_t *tmp = *stack;
	int data = 0;

	data = tmp->n; /* save n  in data*/
	(tmp->next)->n += data; /* safe result in new top node*/
	delete_dnodeint_at_index(stack, 0);
}