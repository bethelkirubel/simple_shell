#include "main.h"
/**
 * main - shell loop
 * Return: Nothing
 */
int main(void)
{
char cmd[MAX_CMD_LEN];
int child_stat;
pid_t child;
char *argv[] = {NULL, NULL, NULL};
char *envp[] = {NULL, NULL, NULL};

while (1)
{
memset(cmd, 0, MAX_CMD_LEN);
printf("$ ");
if (fgets(cmd, MAX_CMD_LEN, stdin) == NULL)
{
printf("\n");
exit(0);
}

cmd[strspn(cmd, "\n")] = '\0';

child = fork();
if (child == 0)
{
if (execve(argv[0], argv, envp)  == -1)
perror("Error");
}
wait(&child_stat);
}
free(command);
return (0);
}
