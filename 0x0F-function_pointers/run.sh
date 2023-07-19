#!/bin/bash

if [ "$1" = "taskfour" ]
then 
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o test
    ./test $2 $3 $4

elif [ "$1" = "tasktwo" ]
then 
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-print_name.c 1-array_iterator.c 2-int_index.c test.c -o test
    ./test tasktwo

elif [ "$1" = "taskone" ]
then 
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-print_name.c 1-array_iterator.c 2-int_index.c test.c -o test
    ./test taskone
elif [ "$1" = "taskthree" ]
then 
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-print_name.c 1-array_iterator.c 2-int_index.c test.c -o test
    ./test taskthree
elif [ "$1" = "runall" ]
then 
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-print_name.c 1-array_iterator.c 2-int_index.c test.c -o test
    ./test runall
else 
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-print_name.c 1-array_iterator.c 2-int_index.c test.c -o test
    
    for arg in "$@"
    do 
        ./test arg

    done 
fi



