#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *str1, char *str2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _putchar(char c);
#endif
