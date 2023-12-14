#include "monty.h"
/**
 * pop - prints theade top
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void pop(stack_t **head, unsigned int num)
{
	stack_t *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head = *head;
	*head = head->next;
	free(head);
}