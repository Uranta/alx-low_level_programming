#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function that takes a pointer to an int as parameter and
 * updates the value it points to to 98.
 *
 * return: always 0.
 *
 */

void reset_to_98(int *n)
{
        *n = 98;

}
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
./0-98
n=402
n=98