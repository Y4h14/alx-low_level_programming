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

for ( ch ='a'; ch <= 'z'; ch++)
{
    if (ch == 'e' || ch == 'q')
    {
        continue;
    }
    
    putchar(ch);
}
putchar(l); 


return (0); 
}