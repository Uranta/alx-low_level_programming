#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints arguments of various types, based on a format string
 * @format: a string containing the format specifiers for the arguments
 *          'c' for char, 'i' for int, 'f' for float, 's' for string
 *          any other character is ignored
 *          format cannot be NULL
 * @...: a variable number of arguments to be printed, one for each format specifier
 */
void print_all(const char *const format, ...)
{
    va_list args;
    int i = 0;
    char c;
    float f;
    char *s;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                s = va_arg(args, char *);
                if (s)
                    printf("%s", s);
                else
                    printf("(nil)");
                break;
        }
        if (format[i + 1])
            printf(",");
        i++;
    }

    printf("\n");
    va_end(args);
}

