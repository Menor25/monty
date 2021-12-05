#include "monty.h"
/**
 *_mod -main entry.
 *Description: compute the rest of the div of the second top element of the stack by the top element
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _mod(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next ==  NULL)
		mod_err(line_number);

	if ((*top)->n == 0)
		div_err2(line_number);

	tmp = (*top)->next;
	tmp->n = (tmp->n) % (*top)->n;
	pop_stack(top, line_number);
}
/**
 * _pchar -main entry.
 * Description: Prints the char at the top of the stack followed by a new line
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _pchar(stack_t **top, unsigned int line_number)
{
	int ascii_number;

	if (*top == NULL)
		pchar_err2(line_number);

	ascii_number = (*top)->n;

	if (ascii_number < 0 || ascii_number > 127)
		pchar_err(line_number);
	putchar(ascii_number);
	putchar('\n');
}
/**
 * pstr_stack -main entry
 * Description: prints the string starting at the top of the stack.
 * @top: element at the top of the stack (head)
 * @line_number: line
 * Return: void
 */
void pstr_stack(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;
	int ascii_number;

	(void)line_number;
	if (*top == NULL)
	{
		putchar('\n');
		return;
	}
	tmp = *top;
	while (tmp != NULL)
	{
		ascii_number = tmp->n;

		if (ascii_number <= 0 || ascii_number > 127)
			break;
		putchar(ascii_number);
		tmp = tmp->next;
	}
	putchar('\n');
}
/**
 * rotl_stack -main entry.
 * Description: rotates the stack to the top
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void rotl_stack(stack_t **top, unsigned int line_number)
{
	stack_t *new_top, *tmp, *new_last;

	(void)line_number;

	if (*top == NULL || (*top != NULL && (*top)->next == NULL))
		return;

	new_last = *top;
	tmp = *top;

	while (tmp->next)
		tmp = tmp->next;

	new_top = (*top)->next;
	new_last->next = NULL;
	new_last->prev = tmp;
	tmp->next = new_last;
	new_top->prev = NULL;
	*top = new_top;
}
/**
 * rotr_stack -main entry.
 * Description: rotates the stack to the bottom (the last element becomes the top element)
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void rotr_stack(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	(void)line_number;
	if (*top == NULL || (*top != NULL && (*top)->next == NULL))
		return;
	tmp = *top;
	while (tmp->next)
		tmp = tmp->next;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	tmp->next = *top;
	(*top)->prev = tmp;
	*top = tmp;
}
/**
 * _nop -main entry.
 * Description: Doesnt do anything
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _nop(stack_t **top, unsigned int line_number)
{
	(void) top;
	(void) line_number;
}

