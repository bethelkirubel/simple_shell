#include "main.h"
/**
 * line_handle - handles line
 * Return: Nothing
 */


void line_handle(void)
{

size_t len = 0;
ssize_t read;


read = getline(&line, &len, stdin);
if (read == -1 || strcmp(line, "exit\n") == 0)
{
exit(EXIT_SUCCESS);
}
line[read - 1] = '\0';

printarg(line);
for (argc = 0; argv[argc] != NULL; argc++);
return;
}

