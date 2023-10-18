#include "main.h"
/**
 * main - shell loop
 * Return: Nothing
 */

int i = 0;
char *argv[MAXARGS];
int argc = 0;

int main(void)
{

while (1)
{
printf("$ ");
line_handle();
forking(argc, argv);

if (strcmp(line, "env\n") == 0)
{
printenv();
}
}
return (0);
}
