#include "main.h"
/**
 * main - shell loop
 * Return: Nothing
 */

char *line = NULL;
int argc = 0;
char *argv[MAXARGS];

int main(void)
{
while (1)
{
printf("$ ");
line_handle();       
forking(argc, argv);
    }

    return 0;
}
