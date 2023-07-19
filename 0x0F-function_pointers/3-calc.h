#ifndef CALC_3_H
#define CALC_3_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/**
 * op_add - Function that returns the sum
 * @a: first value to be added
 * @b: second value to be added
 * 
 * Return: sum of a and b
*/
int op_add(int a, int b);

/**
 * op_sub - Function that returns the sub
 * @a: first value to be added
 * @b: second value to be added
 * 
 * Return: subraction of a and b
*/
int op_sub(int a, int b);

/**
 * op_mul - Function that returns the mul
 * @a: first value to be added
 * @b: second value to be added
 * 
 * Return: mul of a and b
*/
int op_mul(int a, int b);

/**
 * op_div - Function that returns the div
 * @a: first value to be added
 * @b: second value to be added
 * 
 * Return: div of a and b
*/
int op_div(int a, int b);

/**
 * op_mod - Function that returns the mod
 * @a: first value to be added
 * @b: second value to be added
 * 
 * Return: mod of a and b
*/
int op_mod(int a, int b);

/**
 * get_op_func - Function that executes other funcs, determine op to be done
 * @s: string to be evaluated
 * 
 * Return: results of an op
*/
int (*get_op_func(char *s))(int, int);
#endif
