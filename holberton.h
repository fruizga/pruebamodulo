#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <stdbool.h>
#include <errno.h>
#include <sys/wait.h>



char *read_textfile(const char *filename, ssize_t val);
char **strtoken(char *string);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
unsigned int _strlen(char *str);
char *prepare_array(char **string);
char **second_token(char *aux_token);
void print_token(char **array2);



#endif
