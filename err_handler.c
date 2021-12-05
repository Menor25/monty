#include"monty.h"
/**
 * error_arguments -Main entry
 *Description: If user doesnt provide a file or provide more than valid arguments
 * Return: void
 **/
void err_arguments(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * open_error -Main entry
 *Description: print message if file refuse to open
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
 * invalidInstruction_error -Main entry
 *Description: print message if the file has an invalid instruction
 * @invInstruction: instruction
 * @line: line
 * Return: void
 **/
void invalidInstruction_err(char *invInstruction, unsigned int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, invInstruction);
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
 * malloc_error -Main entry
 *Description: print message if malloc cannot alocate memory
 * Return: void
 **/
void malloc_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
