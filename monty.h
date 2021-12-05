#ifndef MONTY
#define MONTY

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <limits.h>
#include <ctype.h>

#define UNUSED(x) (void)(x)
#define TRUE 1
#define FALSE 0
#define DELIMS "\n \t\r"

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/* executer functions*/
void open_and_read(char **argv);
int is_number(char *token);
int is_comment(char *token, int line_counter);


// char **parse(char *text);
// void pall(stack_t *bottom);
// stack_t *push(stack_t *bottom, unsigned int n);

/*opcodes */
void (*get_op_code(char *token, unsigned int line)) (stack_t **, unsigned int);

/* Stack */
void push_stack(stack_t **top, unsigned int line_number);
void pall_stack(stack_t **top, unsigned int line_number);
void free_stack(stack_t *top);
void pint_stack(stack_t **top, unsigned int line_number);
void pop_stack(stack_t **top, unsigned int line_number);

/* error_handler functions */
void err_arguments(void);
void open_err(char **);
void invalid_err(char *invInstruction, unsigned int line);
void not_int_err(unsigned int line);
void malloc_err(void);

/**
 * Invalid Err -Main entry
 *Description: print message if when trying to open the file we got invalid instruction
 * @invError: instruction
 * @line: line
 * Return: void
 **/
void invalid_er(char *invError, unsigned int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, invError);
	exit(EXIT_FAILURE);
}

/**
 * malloc_err -Main entry
 *Description: print error message if malloc failed to allocate memory
 * Return: void
 **/
void malloc_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/* Return error if there is no value in the stack */
void pint_err(unsigned int line);
void pop_err(unsigned int line);
void swap_err(unsigned int line);
void add_err(unsigned int line);
void sub_err(unsigned int line);

#endif /* MONTY_H */
