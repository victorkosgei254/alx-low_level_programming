#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>

/**
 * print_name - Function that prints a name
 * @name: name to be printed
 * @f: Function pointer that receives a char as argument
 * 
 * Return:
*/
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - Function that executes a function given as a parameter
 * @array: Array to be iterated
 * @size: The size of the array
 * @action: Pointer to the function
 * 
 * Return:
*/
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - Function that searches for an integer
 * @array: Array to be searched
 * @size: Size of the array
 * @cmp: Pointer of the function to be executed
 * 
 * Return: Index of first element for which cmp does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int));

/**
 * _putchar - function to write a character to console
 * @c: Character to be printed in the console
 * 
 * Return: Int
*/
int _putchar(char c);
#endif
