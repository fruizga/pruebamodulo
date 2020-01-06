#include "holberton.h"
/**
 * strtoken - tokenize stdin
 * @string: stdin
 * Return: array of tokens
 */
char **strtoken(char *string)
{
char *token, **funcion;
int buffer = 64, i = 0, j= 0, k = 0, l = 0;
char **array = malloc((buffer) * sizeof(char *));

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

printf("\n");

prepare_array(array);

return (0);
}

/**
 * prepare_array - single pointer to partial tokens
 * @string: array of partial tokens
 * Return: a prepared array of tokens
 */

char *prepare_array(char **array)
{
	int i = 0;
	char *aux_token;

	if(array == NULL)
		return (NULL);
	
	while (array[i] != '\0')
	{
		aux_token[i] = *array[i];
	i++;
	}
	second_token(aux_token);
	return (0);
	
}

/**
 * second_token - single pointer to partial tokens
 * @aux_token: array of tokens
 * Return: array of stack and queues operations
 */

char **second_token(char *aux_token)
{
	char *token;
	int buffer = 64, i = 0, j= 0, k = 0, l = 0;
	char **array2 = malloc((buffer) * sizeof(char *));

	if (array2 == NULL)
		return (NULL);

	token = strtok(aux_token, " ");

	while (token)
	{

		array2[i] = malloc(_strlen(token) + 1);

		/*if (array[i] == NULL)
		{
			free(array);
			return (NULL);
		}*/
		_strncpy(array2[i], token, _strlen(token) + 1);
		printf("Array en %d es : %s\n", i, token);
		token = strtok(NULL, " ");
		i++;
	}
	array2[i] = NULL;

	printf("\n");
	print_token(array2);

	return (0);	
}

/**
 * print_token - single pointer to partial tokens
 * @array2: array of tokens
 * Return: array of stack and queues operations
 */

void print_token(char **array2)
{
	int i = 0;

	if(array2 == NULL)
		printf("NULL");

	while (array2)
	{
		printf("%s", array2[i]);
		i++;
	}
}
