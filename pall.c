#include "monty.h"
/**
 * pall - prints theade stack
 * @head: stack head
 * @num: no used
 * Return: no return
*/
void pall(stack_t **head, unsigned int num)
{
	stack_t *head;
	(void)num;

	head = *head;
	if (head == NULL)
		return;
	wheadile (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}