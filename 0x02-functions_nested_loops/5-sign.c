#include "main.h"

/*
 *
 *print_sign -Entry point 
 *Return : 1 or 0  
 */

int print_sign(int n)
{
if(n == 0)
{
	_purchar('0');
	return (0);
}
if (n > 0)
{
	_putchar('+');
	return(1);
}
if (n < 0)
{
	_putchar('-');
	return (-1);
}
}
