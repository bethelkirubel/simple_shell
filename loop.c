#include "main.h"

/**
 * clear_command - resets loop each time
 * Return: nothing
 */
void clear_command(void)
{
char cmd[MAX_CMD_LEN];
memset(cmd, 0, MAX_CMD_LEN);
}

/**
 * read_and_execute - reads and execute
 * Return: nothing
 */
void read_and_execute(void)
{
char cmd[MAX_CMD_LEN];
while (1)
{
clear_command();
fgets(cmd, MAX_CMD_LEN, stdin);
cmd[strspn(cmd, "\n")] = 0;

if (strcmp(cmd, "exit") == 0)
{
break;
}
system(cmd);
}
}
