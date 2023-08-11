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
int k;
for (i = 0;i <= 7; i++)
{
    for (j = 1;j <= 8; j++)
    {
        for (k = 2; k <= 9; k++)
        {
           
        
        putchar('0'+ i);
        putchar('0'+j);
        putchar('0'+k);
        if(k == 9)
        {
            continue;
        }
        putchar(',');
        putchar(' '); 
        }
        
        
    }
    
    
}

putchar('\n');


return (0); 
}