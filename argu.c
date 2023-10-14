#include "main.h"

/**
 * printarg - prints arguments
 * @line: command
 * @argv: argument value
 *
 */

void printarg(char *line, char *argv[])
{
int i = 0;

char *token = strtok(line, " ");
for (i = 0; i < MAXARGS - 1 && token != NULL; i++)
{
argv[i] = token;
token = strtok(NULL, " ");
}
argv[MAXARGS - 1] = NULL;
}
