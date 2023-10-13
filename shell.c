#include "main.h"
/**
 * main - shell loop
 * Return: Nothing
 */
int main(void)
{
char *line = NULL;
char *argv[2];
size_t len = 0;
ssize_t read;
int status;
pid_t pid;
while (1)
{
printf("$ ");
read = getline(&line, &len, stdin);
if (read == -1 || strcmp(line, "exit\n") == 0)
{
exit(EXIT_SUCCESS);
}
line[read - 1] = '\0';
argv[0] = line;
argv[1] = NULL;
printarg(line, argv);
pid = fork();
if (pid == -1)
{
perror("Error");
printf("\n");
continue;
}
if (pid == 0)
{
if (execvp(argv[0], argv) == -1)
perror("Error executing command");
exit(EXIT_FAILURE);
}
wait(&status);
}
return (EXIT_SUCCESS);
}
