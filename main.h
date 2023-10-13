#ifndef MAIN_H
#define MAIN_H


#define MAXARGS 256
#define MAX_CMD_LEN 256

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>

void clear_command(void);
void read_and_execute(void);
void printarg(int argc, char *argv[]);
extern char *command;
extern char cmd[MAX_CMD_LEN];

#endif

