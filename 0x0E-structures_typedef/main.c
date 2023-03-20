#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for ALX students.
 *
 * Return: Always 0.
 */
int main(void)
{
  struct dog my_dog;

  my_dog.name = "Flask";
  my_dog.age = 4.6;
  my_dog.owner = "Vivian";
  printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
  return (0);
}
