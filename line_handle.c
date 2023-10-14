#include "main.h"
/**
 * line_handle - handles line
 * Return: Nothing
 */

void line_handle(void)
{
char *line = NULL;
char *argv[2];
size_t len = 0;
ssize_t read;

read = getline(&line, &len, stdin);
if (read == -1 || strcmp(line, "exit\n") == 0)
{
exit(EXIT_SUCCESS);
}
line[read - 1] = '\0';
argv[0] = line;
argv[1] = NULL;

}
