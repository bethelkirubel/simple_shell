#include "main.h"

/**
 * my_getline - built getline function
 * Return: Nothing
 */

char *my_getline(void)
{
int c;
static char buffer[MAX_BUFFER];
int i;

while ((c = getchar()) != '\n' && c != EOF)
{
if (i < MAX_BUFFER - 1)
{
buffer[i++] = c;
}
else
{
break;
}
buffer[i] = '\0';
}
return (buffer);
}

