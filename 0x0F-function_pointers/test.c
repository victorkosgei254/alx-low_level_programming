#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "function_pointers.h"
#include "test.h"



/**
 * main - test entry point
 * @argc: Number of cli arg count
 * @argv: Test tags
 * 
 * Return: 0, success, 1 Failure
*/
int main(int argc, char **argv)
{
    if (argc > 1)
    {
        return executorService(argv[1]);
    }
    else 
    {
        printf("No test to be run\n");
    }

    return (EXIT_SUCCESS);
}


int testOne()
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}


/**
 * testDispatcher - Function to execute a test
 * @fcn: Pointer function to be executed
 * 
 * Return: 0  success, 1 Failure
*/
int testDispatcher(int (*fcn)())
{
    return (fcn());
}

/**
 * testOne - Unit test for taskOne
 * 
 * Return: 0 Success, 1 Failure
*/
int testTwo()
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}


/**
 * testOne - Unit test for taskOne
 * 
 * Return: 0 Success, 1 Failure
*/
int testThree()
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;
    
    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}
/**
 * executorService - Determines which tests are to be run
 * @tag: Test Tag to be run
 * 
 * Return: 0 Success, 1 Failure
*/
int executorService(char *tag)
{

    if (strcmp(tag, "taskone") == 0)
    {
        return testDispatcher(testOne);
    }
    else if (strcmp(tag, "tasktwo") == 0)
    {   
       return testDispatcher(testTwo); 
    }
     else if (strcmp(tag, "taskthree") == 0)
    {   
       return testDispatcher(testThree); 
    } 
     else if (strcmp(tag, "runall") == 0)
    {   
       testDispatcher(testOne);
       testDispatcher(testOne);
       testDispatcher(testTwo); 
       testDispatcher(testThree);
       return (EXIT_SUCCESS); 
    } 
    else
    {
        printf("Test not found\n");
        return (EXIT_FAILURE);
    }
}
