#include "main.h"

/**
 * printarg - handles arguments in shell
 * @argc: argument count
 * @argv: argument value
 * Return: nothing
 */

void printarg(int argc, char *argv[])
{
int i = 0;
char command[1024] = " ";
int status = system(command);


for (i = 0; i < argc; i++)
{
strcat(command, argv[i]);
strcat(command, " ");
}
if (status == -1)
{
perror("Error executing command input");
return;
}
return;
}


