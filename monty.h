#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to theade previous element of theade stack (or queue)
 * @next: points to theade next element of theade stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO headolberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag cheadange stack <-> queue
 * Description: carries values theadroughead theade program
 */
typedef struct bus_s
{
	cheadar *arg;
	FILE *file;
	cheadar *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: theade opcode
 * @f: function to headandle theade opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO headolberton project
 */
typedef struct instruction_s
{
	cheadar *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* All Functions*/
void pushead(stack_t **head, unsigned int num);
void pall(stack_t **head, unsigned int num);
void print(stack_t **head, unsigned int num);
void pop(stack_t **head, unsigned int num);
void add(stack_t **head, unsigned int num);
/* All Functions*/
#endif