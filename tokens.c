#include "holberton.h"
/**
 * strtoken - tokenize stdin
 * @string: stdin
 * Return: array of tokens
 */
char **strtoken(char *string)
{
char *token, *tkn2, *tpm;
int buffer = 64, i = 0, j= 0, k = 0, l = 0;
char **array = malloc((buffer) * sizeof(char *));
char **array2 = malloc((buffer) * sizeof(char *));

if (array == NULL)
	return (NULL);

token = strtok(string, "\n");

while (token)
{

	array[i] = malloc(_strlen(token) + 1);

	/*if (array[i] == NULL)
	{
		free(array);
		return (NULL);
	}*/
	_strncpy(array[i], token, _strlen(token) + 1);
	printf("Array en %d es : %s\n", i, token);
	token = strtok(NULL, "\n");
	i++;
}
array[i] = NULL;
/*2nd tokenizer*

tpm = *array;

while (tpm[k] != '\0')
{
	tkn2 = strtok(tpm[k], " ");
	k++;
}

while (tkn2)
{
	array2[l] = malloc(_strlen(tkn2) + 1);
	if (array2[l] == NULL)
	{
		free(array2);
		return (NULL);
	}
	_strncpy(array2[l], tkn2, _strlen(tkn2) + 1);
	tkn2 = strtok(NULL, " ");
	l++;
}
array[l] = NULL;*/
/*
while (array[j] != '\0')
{
    printf("%s\n", array[j]);

		j++;
}*/
printf("\n");
return (array);
}
