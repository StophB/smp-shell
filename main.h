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
void freesupplies(char **buf);

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
int stringcompares(char *str1, char *str2);
int stringlength(char *str);
int stringncmp(char *str1, char *str2, int n);
char *stringdupicates(char *str);
char *stringcharacter(char *str, char c);

void application(char *cmd, char **cp);
char *findlocatepath(void);

/* built-in plugins */ 
int my_checker(char **cmd, char *buf);
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
