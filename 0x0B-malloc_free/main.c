#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tests.h"

/**
 * execute - executor service for functions
 *
 */
int executeTest(int (*fcn)(), char *testID)
{

    if (fcn() == EXIT_SUCCESS)
    {
        printf("%s ...SUCCESS\n\n\n", testID);
        return (EXIT_SUCCESS);
    }
    else
    {
        printf("%s ...FAILED\n", testID);
        return (EXIT_FAILURE);
    }
}

/**
 * dispatcher - dispatch a test to respective
 */
int dispatcher(char *testID)
{
    if (strcmp(testID, "testone") == 0)
    {
        printf("%s Results:->\n", testID);
        return (executeTest(testOne, testID));
    }
    else if (strcmp(testID, "testtwo") == 0)
    {
        printf("%s Results:->\n", testID);
        return (executeTest(testTwo, testID));
    }
    else if (strcmp(testID, "testthree") == 0)
    {
        printf("%s Results:->\n", testID);
        return (executeTest(testThree, testID));
    }
    else if (strcmp(testID, "testfour") == 0)
    {
        printf("%s Results:->\n", testID);
        return (executeTest(testFour, testID));
    }
    else if (strcmp(testID, "testfive") == 0)
    {
        printf("%s Results:->\n", testID);
        return (executeTest(testFive, testID));
    }
    else if (strcmp(testID, "runall") == 0)
    {
        printf("%s Results:->\n\n", testID);
        executeTest(testOne, "testone");
        executeTest(testTwo, "testtwo");
        executeTest(testThree, "testthree");
        executeTest(testFour, "testfour");
         executeTest(testFive, "testfive");
        return (EXIT_SUCCESS);
    }
    else
    {
        printf("Test %s not found or registered\n", testID);
        return (EXIT_FAILURE);
    }
}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int argc, char **args)
{
    if (argc > 1)
    {
        return (dispatcher(args[1]));
    }
    else
    {
        printf("Exiting... No test command given\n");
        return (0);
    }

    return (0);
}