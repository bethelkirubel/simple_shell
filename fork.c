#include "main.h"

/**
 * fork - forking only when command exists
 * Return: Nothing
 */

int argc;
char **argv;

void forking(int argc, char *argv[])
{
char *line = argv[1];
pid_t pid;

if (argc < 2) {
        printf("Please provide a command to execute.\n");
        return;
    }


if (access(line, F_OK) != -1)
{
pid = fork();
if (pid == 0)
{
if (execv(line, argv) == -1)
{
perror("Error executing command");
exit(EXIT_FAILURE);
}
else 
{
execv(line, argv);
}
}
else if(pid > 1)
{
wait(NULL);
}
}
else
{
perror("Command not found\n");
}
return;
}
