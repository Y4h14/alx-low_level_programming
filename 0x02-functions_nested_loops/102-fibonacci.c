#include <stdio.h>

/*
* main - prints the first 50 febonachi numbers
*
* Return: always 0
*/

int main(void)
{
int i, j, k, next; 
j = 1;
k = 2; 
for ( i = 1; i < 51; i++)
{
    printf("%d, ", j);

    next = j + k;
    j = k ;
    k = next;
    if (i == 50)
    {
        printf("\n");
    }
}




return (0);
}