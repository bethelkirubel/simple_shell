#include "main.h"

/**
 * forking - forking only when command exists
 * @argc: argument count
 * @argv: argument value
 * Return: Nothing
 */

void forking(int argc, char *argv[])
{
char *line = argv[0];
pid_t pid;

if (argc < 1)
{
printf("Please provide a command to execute.\n");
return;
}

pid = fork();
if (pid == 0)
{
if (execvp(line, argv) == -1)
{
perror("Error executing command");
exit(EXIT_FAILURE);
}
}
else if (pid > 1)
{
wait(NULL);
}
}
