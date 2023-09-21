#include <stdio.h>
#include "lists.h"
/**
 * execute_before_main - run before main does
 * Returns: nothing
 */
void __attribute__((constructor)) execute_before_main()
{
printf("You're beat! and yet, you must allow,
\nI bore my house upon my back!\n");
}
