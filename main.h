#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <time.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdbool.h>

/* free efficiency for assistant function */
void free_supplies(char **buff);

struct builtin
{
	char *envi;
	char *exit;
} builtin;

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

/* my list strings */
int string_compares(char *str1, char *str2);
int string_length(char *str);
int string_n_cmp(char *str1, char *str2, int n);
char *string_dupicates(char *str);
char *string_character(char *str, char c);

void app(char *cp, char **cmd);
char *find_located_path(void);

/* built-in plugins */ 
int my_checker(char **cmd, char *buff);
void user_immediate(void);
void signal_handler(int m);
char **distinct_symbol(char *line);
char *path_testing(char **path, char *cmd);
char *path_end(char *path, char *cmd);
int builtin_handler(char **cmd, char *line);
void leave_command(char **cmd, char *line);

void environment_print(void);

/* variables env */
extern char **environ;
extern __sig_handler_t signal(int __sig, __sig_handler_t __handler);

#endif
