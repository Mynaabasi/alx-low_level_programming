#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *stra_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);

#endif
