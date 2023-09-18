#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define DELIM " \t\n"
extern char **environ;

char *read_command(void)
char **tokenizer(char *line)
int _execute(char **command, char **argv, int idx)
void freearray2D(char **arr)
char *_getenv(char *variable)
char *_getpath (char *command)
void printerror(char *name, char *cmd, int idx)
char *_itoa (int n)
void reverse_str(char *str, int len)

char *_strdup (const char *str)
int _strcmp(const char *s1, const char *s2)
int _strlen(char *s)
char *_strcat (char *dest, char *src)
char *_strcpy(char *dest, char *src)

#endif
