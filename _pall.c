#include "monty.h"

/**
 * file_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void file_pall(stack_t **head, unsigned int counter)
{
	stack_t *head;
	(void)counter;

	head = *head;
	if (h == NULL)
		return;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}