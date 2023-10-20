#ifndef SHELL_H
#define SHELL_iH

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
#include <errno.h>



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

extern char **__environ;
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

#define HEX 16
#define DECIMAL 10

void our_putchar_c(char c);
void our_putchar(va_list h);
void _print_str(va_list h);
int our_printf(const char *format, ...);
void _print_int(va_list h);
void numToString(int64_t num, int target, char *buff);
void unsgnednumToString(uint64_t num, int target, char *buff);
void exec_commd(char **arg, char **argv, int num);
char *add_to_dir(char *dir, char **argv, char *alpha);
int _prompt(void);
char **toks_PATH(char *envVar, char *delim);
char *_getenvirons(const char *nam);


#define DELIM "\n\t\a\r:"

typedef struct builtins
{
	char *command;
	void (*func)(char **);
} builtins;


struct flags
{
	bool action;
};
struct flags flag;

/** for library functions ********/
char *_strdup(char *org);
void our_puts(char *str);
char *_strchr(char *str, int b);
char *stnrcat(char *dest, char *src);
int stnrlen(const char *u);
char *_strcpy(char *dest, char *src);
int _strncmp(const char *str1, const char *str2, size_t m);
int __strcmp(char *str1, char *str2);



#endif
