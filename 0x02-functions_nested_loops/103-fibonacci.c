#include <stdio.h>

/*
* main - prints the first 50 febonachi numbers
*
* Return: always 0
*/

int main(void)
{
double sum = 0;
long int i, j, k, next; 
j = 1;
k = 2; 

while (sum < 4000000)
{
    sum += j;
    next = j + k;
    j = k ;
    k = next;
}

printf("%f\n", sum);



return (0); 
}