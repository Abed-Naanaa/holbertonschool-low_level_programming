#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
#include <stddef.h>
int _putchar(int c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
