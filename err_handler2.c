#include "monty.h"
/**
 * div_error - Print error if the stack contains less than two elements
 * @line: line
 * Return: void
 */
void div_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * div_error2 - If the top element of the stack is 0 print error
 * @line: line
 * Return: void
 */
void div_err2(unsigned int line)
{
	fprintf(stderr, "L%u: division by zero\n", line);
	exit(EXIT_FAILURE);
}
/**
 * mul_error - if the stack contains less than two elements
 * @line: line
 * Return: void
 */

void mul_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * mod_error - Error if the stack contains less than two elements
 * @line: The function´s parameter
 * Return: void
 */
void mod_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line);
	exit(EXIT_FAILURE);
}
