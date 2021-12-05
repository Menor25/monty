#include "monty.h"

/**
 * pall_stack -Main entry
 * Description: prints all the elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 * Return void
 **/

void pall_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	for (current = *stack; current != NULL; current = current->next)
	printf("%d\n", current->n);
}
