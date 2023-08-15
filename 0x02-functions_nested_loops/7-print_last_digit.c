#include "main.h"

/**
 * print_last_digit -Entry point
 *@x: and intiger
 *
 * Return: the last digit
 */

int print_last_digit(int x)
{
int y ;
if (x > 10)
{
     y = (x % 10) + '0'; 
}
else
{
    y = x + '0'; 
}

return (y);
}
