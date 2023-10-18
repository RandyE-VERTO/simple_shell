#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdbool.h>
#include <stdarg.h>

#define MAX_INPUT 1024


void print_environs(char **args __attribute__((unused)));
void for_cd(char **args);
int to_exec_commands(char **argv);
void to_exit(char **args);

int _putchar(char c);
void for_cd(char **args);
void print_environs(char **args __attribute__((unused)));
void to_exit(char **args;
int to_exec_commands(char **argv);

#endif
