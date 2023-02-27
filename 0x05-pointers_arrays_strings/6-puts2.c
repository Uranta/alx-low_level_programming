#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first.
 *
 * @s: A pointer to the string to print.
 *
 * Description: This function prints every other character of a string,
 * starting with the first character, followed by a new line.
 */
void puts2(char *s)
{
        int a;

        for (a = 0; s[a] != '\0'; a++)
        {
                if (a % 2 == 0)
                {
                        _putchar(s[a]);
                }
        }
        _putchar('\n');
}

