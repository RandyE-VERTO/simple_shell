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
#include <limits.h>
#include <stdint.h>


#define MAX_INPUT 1024

/**
 * struct strngspec - structure for format specifier
 * @ss: Used to represent specifier
 * @f: a pointer to function
 * DEscriptor: Used for printf
 */
typedef struct strngspec
{
	char ss;
	void (*f)();
} ss_t;

void print_environs(char **args __attribute__((unused)));
void for_cd(char **args);
int to_exec_commands(char **argv);
void to_exit(char **args);
char **tokenise_line(char *buffer, char *delim, int toks_num);
int print(char *vic, int df);
void ctrl_c(int signum);
char *order_dir(char **ord);
int num_toks(char *buffer, char *delim);
void free_buff(char **argv);

void our_putchar_c(char c);
void our_putchar(va_list h);
void _print_str(va_list h);
int our_printf(const char *format, ...);
void _print_int(va_list h);
void numToString(int64_t num, int target, char *buff);
void unsgnednumToString(unit64_t num, int target, char *buff);
void exec_commd(char **arg, char **argv, int num);
char *add_to_dir(char *dir, char **argv, char *alpha);
int _prompt(void);
char **toks_PATH(char *envVar, char *delim);
char _getenvirons(const char *nam);


void for_cd(char **args);
void print_environs(char **args __attribute__((unused)));
void to_exit(char **args;
int to_exec_commands(char **argv);

#endif
