#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive(int *array, unsigned int l, size_t h, int value);
void print_array(int *array, unsigned int l, size_t h);
#endif
