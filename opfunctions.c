#include "holberton.h"
/**
*
*
*
*/
void push(stack_t **stack, unsigned int line_number)
{
  stack_t *new_nodo = NULL;

  if (!stack)
  {
    fprintf(stderr, " jodeer tío, %d\n", line_number);
    exit (EXIT_FAILURE);
  }
  new_nodo = malloc(sizeof(size_t));
   if (new_nodo == NULL)
   {
     fprintf(stderr, "ah vaina\n");
     exit (EXIT_FAILURE);
   }

   new_nodo->n = externalvar.varext;
   new_nodo->next = *stack;
   new_nodo->prev = NULL;
   if (*stack)
   {
     (*stack)->prev = new_nodo;
   }

   *stack = new_nodo;
}

void pall(stack_t **stack, unsigned int line_number)
{
  stack_t *printstack;

  if (!stack)
  {
    fprintf(stderr, " jodeer tío, %d\n", line_number);
    exit (EXIT_FAILURE);
  }

  printstack = *stack;

  while (printstack)
  {
    printf("%d\n", printstack->n);
    printstack = printstack->next;
  }

}

void add(stack_t **stack, unsigned int line_number)
{
  int sum;

  if (!stack || (*stack)->next == NULL)
  {
    fprintf(stderr, "error\n");
    exit (EXIT_FAILURE);
  }

  sum = (*stack)->n;
  pop(stack, line_number);
  (*stack)->n += sum;
}

void pop(stack_t **stack, unsigned int line_number)
{
  stack_t *aux = *stack;

  if (!stack)
  {
    fprintf(stderr, "error %d\n", line_number);
    exit (EXIT_FAILURE);
  }

  *stack = (*stack)->next;
  free(aux);

  if (*stack)
  {
    (*stack)->prev= NULL;
  }
}
