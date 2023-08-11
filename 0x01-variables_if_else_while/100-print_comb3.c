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
for (i = 0;i <= 8; i++)
{
    for (j = 0;j <= 9; j++)
    {
        if (i == j || (i*10 + j)%10 == 0)
        {
            continue;
        }
       
        
        putchar('0'+ i);
        putchar('0'+j);
        if(j == 9)
        {
            continue;
        }
        putchar(',');
        putchar(' ');
    }
    
    
}

putchar('\n');


return (0); 
}