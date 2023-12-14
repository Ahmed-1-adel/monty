#include "monty.h"
/**
 * print - prints the top
 * @h: stack h
 * @num: line_number
 * Return: no return
*/
void print(stack_t **h, unsigned int num)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}