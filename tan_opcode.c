#include "holberton.h"
/**
*
*
*
*/
void tan_opcode(char *token, stack_t **stack, unsigned int line_number)
{
  int i = 0;

  instruction_t hugo_norzobia[] = {
    {"push", push},
    {NULL, NULL}
  };

  for (; hugo_norzobia[i].opcode != NULL; i++)
  {
    if (strcmp(token, hugo_norzobia[i].opcode) == 0)
    {
      hugo_norzobia[i].f(stack, line_number);
      return;
    }
  }

  fprintf(stderr, "jajaja\n");
  //liberar stack
  exit (EXIT_FAILURE);
}
