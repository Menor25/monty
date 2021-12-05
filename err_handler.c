#include"monty.h"
/**
 * err_arguments -Main entry
 *Description: If user doesnt give file or more than valid arguments
 * Return: void
 **/
void err_arguments(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * open_err -Main entry
 *Description: print message if its not possible to open the file
 * @argv: arguments received by main, ni this case te filename
 * Return: void
 **/
void open_err(char **argv)
{
	char *filename = argv[1];

	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}
/**
 * invalid_err -Main entry
 *Description: print message if le to open the filehas an invalid instruction
 * @invInstruction: instruction
 * @line: line
 * Return: void
 **/
void invalid_err(char *invError, unsigned int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, invError);
	exit(EXIT_FAILURE);
}
/**
 * not_int_err -Main entry
 *Description: print message if parameter received is not integer
 * @line: line
 * Return: void
 **/
void not_int_err(unsigned int line)
{
	fprintf(stderr, "L%u: usage: push integer\n", line);
	exit(EXIT_FAILURE);
}
/**
 * malloc_err -Main entry
 *Description: print message if cant malloc anymore
 * Return: void
 **/
void malloc_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * pint_err - print error message if the stack is empty
 * @line: line
 * Return: void
 */
void pint_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line);
	exit(EXIT_FAILURE);
}
/**
 * pop_err - print error message if the stack is empty
 * @line: line
 * Return: void
 */
void pop_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}
/**
 * swap_err - print err msg if stack contains less than two elements
 * @line: line
 * Return: void
 */
void swap_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * add_err - Print error if the stack contains less than two elements
 * @line: line
 * Return: void
 */
void add_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * sub_err - Print error if the stack contains less than two elements
 * @line: line
 * Return: void
 */
void sub_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * div_err - Print error if the stack contains less than two elements
 * @line: line
 * Return: void
 */
void div_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * div_err2 - Print error if the top element of the stack is 0
 * @line: line
 * Return: void
 */
void div_err2(unsigned int line)
{
	fprintf(stderr, "L%u: division by zero\n", line);
	exit(EXIT_FAILURE);
}
/**
 * mul_err - print error if the stack contains less than two elements
 * @line: line
 * Return: void
 */

void mul_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * mod_err - print error if the stack contains less than two elements
 * @line: The function´s parameter
 * Return: void
 */
void mod_err(unsigned int line)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * pchar_err - main entry
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
 * pchar_err2 - print error message if the stack is empty
 * @line: The function´s parameter
 * Return: void
 */
void pchar_err2(unsigned int line)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line);
	exit(EXIT_FAILURE);
}
