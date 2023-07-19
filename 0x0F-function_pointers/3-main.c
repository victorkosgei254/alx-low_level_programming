#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Application entry point
 * @argc: Number of argument count
 * @argv: Command line input arguments
 * 
 * Return: 0 Success, 1 Failure
*/
int main(int argc, char **argv)
{
    int a, b, results;

    if (argc == 4)
    {
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        results = get_op_func(argv[2])(a, b);
        if (results == '\0')
        {
            printf("Error\n");
            return (EXIT_FAILURE);
        }
        printf("%d\n", results);
    }
    else
    {
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
