#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code .
 *
 * Return:  0.
 */
int main(int num, char **arr)
{
  ssize_t n;

  if (num != 2)
    {
      dprintf(2, "Usage: %s filename\n", arr[0]);
      exit(1);
    }
  n = read_textfile(arr[1], 114);
  printf("\n(printed chars: %li)\n", n);
  n = read_textfile(arr[1], 1024);
  printf("\n(printed chars: %li)\n", n);
  return (0);
}
