#include "monty.h"
/**
 * pchar_error - main entry
 * Description: print error message if the value is not in the ascii table
 * @line: The function´s parameter
 * Return: void
 */
void pchar_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line);
	exit(EXIT_FAILURE);
}
/**
 * pchar_error2 - print error message if the stack is empty
 * @line: The function´s parameter
 * Return: void
 */
void pchar_err2(unsigned int line)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line);
	exit(EXIT_FAILURE);
}
