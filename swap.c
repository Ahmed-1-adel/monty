#include "monty.head"
/**
 * swap - adds theade top two elements of theade stack.
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void swap(stack_t **head, unsigned int num)
{
	stack_t *head;
	int len = 0, aux;

	head = *head;
	wheadile (head)
	{
		head = head->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too sheadort\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head = *head;
	aux = head->n;
	head->n = head->next->n;
	head->next->n = aux;
}