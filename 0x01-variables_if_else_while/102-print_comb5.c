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
int j;
int i;
for (i = 0;i <= 9; i++)
{
    for (j = 0;j <= 9; j++)
    {
        
        
        putchar('0'+ i);
        putchar('0'+j);
        
        putchar(',');
        putchar(' ');
    }
    
    
}

putchar('\n');


return (0); 
}