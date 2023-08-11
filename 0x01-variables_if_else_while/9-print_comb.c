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
char ch; 
char l = '\n'; 

for ( ch ='0'; ch <= '9'; ch++)
{
    putchar(ch);
    putchar(',');
    putchar(' ');
}
putchar(l);


return (0); 
}