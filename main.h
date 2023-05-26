#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/types.h>
#define SIZE 80

extern char **environ;
void prompt(void);
int parse_args(char *buff, char **args);
void exec_cmd(char **args);
void working_shell(void);
void print_env(void);

#endif
