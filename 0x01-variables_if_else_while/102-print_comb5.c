#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print two two digit combinations
 *
 * Return: Always 0 (success)
 *
*/
int main(void)
{
int i , j , k , l ; 
for (i = 0;i <= 9; i++)
{
    for (j = 0;j <= 9; j++)
    {
        for (k = 0; k <= 9; k++)
        {
            for (l = 1; l <= 9; l++)
            {
                if (k+l == i+j)
                {
                    continue;
                }
                
                putchar('0'+ i);
                putchar('0'+j);
                putchar(' ');

                putchar('0'+ k);
                putchar('0'+ l);
                putchar(',');

                
                
            }   
        }
    }
}
putchar('\n');
return (0); 
}