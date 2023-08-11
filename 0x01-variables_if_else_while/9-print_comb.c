#include <stdio.h> 
/**
 * main - Entry point
 *
 * Description: print the value of n's status(+,-,0)
 *
 * Return: Always 0 (success)
 *
*/
int main(void)
{
int ch; 


for ( ch = 0; ch <= 9; ch++)
{
    putchar('0' + ch);
    putchar(',');
    putchar(' ');
}
putchar('\n');


return (0); 
}