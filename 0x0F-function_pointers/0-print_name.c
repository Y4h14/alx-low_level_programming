#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: a string
 * @f: a function
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
