#include "monty.h"
/**
 * pall - prints the stack
 * @h: stack h
 * @num: no used
 * Return: no return
*/
void pall(stack_t **h, unsigned int num)
{
	stack_t *h;
	(void)num;

	h = *h;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}