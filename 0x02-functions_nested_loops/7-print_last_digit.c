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

     y = (x % 10) ;
     
_putchar(y + '0'); 
return (y);
}
