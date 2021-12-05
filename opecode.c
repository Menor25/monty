#include "monty.h"
/**
 * get_opcode - this is a function that will perform the opr
 * @token: opr code
 * @line: read line
 * Return: void
 */
void (*get_op_code(char *token, unsigned int line)) (stack_t **, unsigned int)
{
/* Using the instruction_t function in the monty.h */
	int i;
	instruction_t opr[] = {
		{"push", push_stack}, //pushes an element to the top of the stack
		{"pall", pall_stack}, // prints all the values on the stack, starting from the top
		{"pint", pint_stack}, //pint prints the value at the top of the task
		{"pop", pop_stack}, //  removes the element of the stack
		{"swap", _swap}, //swaps two elements in a stack
		{"nop", _nop}, // does do anything, so it returns nothing
		{"add", _add}, //add the top two elements of the stack
		{"sub", _sub}, // subtract the top element of the stack from the second top element of the stack
		{"div", _div}, //divides the second top element of the stack by the top element of the stack
		{"mul", _mul}, // multiplies the second top element od the stack with the top element of the stack
		{"mod", _mod}, //compute the rest of the division of the second top element of the stack by the top element
		{"rotl", rotl_stack}, // rotate the stack to the top
		{"rotr", rotr_stack}, //rotate the stack to the bottom
		{"pchar", _pchar}, // print the char at the top of the stack
		{"pstr", pstr_stack}, //print the string starting at the top of the stack, followed by a new line
		{NULL, NULL}
	};
    
    //looping through the opr[]
	for (i = 0; opr[i].opcode != NULL; i++)
	{
		if (strcmp(token, opr[i].opcode) == 0)
		{
			return (opr[i].f);
		}
	}
	invalid_err(token, line);
	return (NULL);
}
