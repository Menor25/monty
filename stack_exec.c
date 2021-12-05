#include "monty.h"
int number;
/**
 * push_stack -push (add) node to the top of the list.
 *Description: Function that push a new node at the beginning of stack_t stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void push_stack(stack_t **top, unsigned int line_number)
{
	stack_t *newNode;

	(void) line_number;
	newNode = malloc(sizeof(stack_t));

	if (newNode == NULL)
		malloc_err();

	newNode->n = number;
	newNode->prev = NULL;
	if (*top == NULL)  // Check if stack is empty
	{
		newNode->next = NULL;
		*top = newNode;
	}
	else // If stack is not empty
	{
	newNode->next = *top;
	(*top)->prev = newNode;
	*top = newNode;
	}
}
/**
 * pall_stack -print.
 *Description: Function that print all the elements of a stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pall_stack(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = *top;
	(void)line_number;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
/**
 * free_stack -free list.
 *Description: Function that frees a list_t list
 * @top: top of the stack. (head)
 * Return: void
 **/
void free_stack(stack_t *top)
{
	stack_t *temp;

	if (top == NULL)
		return;

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
	free(top);
}
/**
 * pint_stack -print.
 * Description: Function that print the value at the top of the stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pint_stack(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = *top;

	if (tmp != NULL)
		printf("%d\n", tmp->n);
	else
		pint_err(line_number);
}
/**
 * pop_stack -print.
 * Description: Function that pop (delete) the value at top of a stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pop_stack(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *top;
	if (*top == NULL)
		pop_err(line_number);

	tmp = tmp->next;
	free(*top);
	*top = tmp;
}
