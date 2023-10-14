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

extern char *line;
extern char *argv[];
extern int argc;
void line_handle(void);
void forking(int argc, char *argv[]);
void printarg(char *line, char *argv[]);

#endif

