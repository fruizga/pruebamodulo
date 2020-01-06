#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*char *read_textfile(const char *filename, ssize_t val);
char **strtoken(char *string);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
unsigned int _strlen(char *str);
char *prepare_array(char **string);
char **second_token(char *aux_token);
void print_token(char **array2);*/

typedef struct externa
{
  int varext;
} externa_t;

extern externa_t externalvar;

externa_t externalvar;

/*main*/
int esnum(char *token);
void gettoken(char *string, stack_t **stack, unsigned int line_number);

/*struct compare*/
void tan_opcode(char *token, stack_t **stack, unsigned int line_number);

/*operations*/
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);


#endif
