#include "main.h"

/**
 * printarg - prints arguments
 * @line: command
 *
 */
extern char *argv[MAXARGS];
void printarg(char *line)
{
int i = 0;

char *token = strtok(line, " ");
for (i = 0; i < MAXARGS - 1 && token != NULL; i++)
{
argv[i] = token;
token = strtok(NULL, " ");
}
argv[i] = NULL;
}
