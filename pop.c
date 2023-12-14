#include "monty.h"
/**
 * pop - prints the top
 * @h: stack h
 * @num: line_number
 * Return: no return
*/
void pop(stack_t **h, unsigned int num)
{
	stack_t *h;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	h = *h;
	*h = h->next;
	free(h);
}