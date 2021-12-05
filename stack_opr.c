#include "monty.h"
/**
 *_swap -main entry.
 *Description: The _swap Function is a function that swaps the top 2 elements of a stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _swap(stack_t **top, unsigned int line_number)
{
	int number;

	if (*top == NULL || (*top)->next == NULL)
		swap_err(line_number);

	number = (*top)->n;
	(*top)->n = (*top)->next->n;
	(*top)->next->n = number;
}
/**
 *_add -main entry.
 *Description: _add Function is a function that adds the top two elements of the stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _add(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
		add_err(line_number);

	tmp = (*top)->next;
	tmp->n += (*top)->n;
	pop_stack(top, line_number);
}
/**
 *_sub -main entry.
 *Description: _sub function subtract the top element of the stack from the 2nd top element of the stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _sub(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
		sub_err(line_number);

	tmp = (*top)->next;
	tmp->n -= (*top)->n;
	pop_stack(top, line_number);
}
/**
 * _div - main entry
 * Description: _div function divides the seccond top element of the stack by the top element
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 */

void _div(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
		div_err(line_number);

	if ((*top)->n == 0)
		div_err2(line_number);

	tmp = (*top)->next;
	tmp->n = (tmp->n) / (*top)->n;
	pop_stack(top, line_number);
}
/**
 * _mul - main entry
 * Description: _mul function multiply the seccond top element of stack and the top element
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 */
void _mul(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
		mul_err(line_number);

	tmp = (*top)->next;
	tmp->n *= (*top)->n;
	pop_stack(top, line_number);
}
