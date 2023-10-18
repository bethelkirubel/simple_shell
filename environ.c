#include "main.h"

/**
 * printenv - prints environment
 * Return: nothing
 */

void printenv(void)
{
char **env = environ;

while (*env)
{
printf("%s\n", *env);
env++;
}
return;
}


