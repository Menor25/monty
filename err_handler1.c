#include"monty.h"
/**
 * pint_error - if the stack is empty for pint operation, print error message
 * @line: line
 * Return: void
 */
void pint_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line);
	exit(EXIT_FAILURE);
}
/**
 * pop_error - print error message if the stack is empty for pop operation
 * @line: line
 * Return: void
 */
void pop_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}
/**
 * swap_error - print error msg if there re less than two elements in stack
 * @line: line
 * Return: void
 */
void swap_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * add_error - print error msg if there re less than two elements in stack
 * @line: line
 * Return: void
 */
void add_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * sub_error - print error msg if there re less than two elements in stack
 * @line: line
 * Return: void
 */
void sub_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line);
	exit(EXIT_FAILURE);
}
