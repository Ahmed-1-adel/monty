#include "monty.h"
/**
 * swap - adds the top two elements of the stack.
 * @h: stack h
 * @num: line_number
 * Return: no return
*/
void swap(stack_t **h, unsigned int num)
{
	stack_t *h;
	int len = 0, aux;

	h = *h;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	h = *h;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}