#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of the final digit 
 *
 * Return: Always 0 (success)
 *
*/
int main(void)
{
int n;
int x;

srand(time(0));
n = rand() - RAND_MAX / 2;

x = n % 10 ;
if (x == 0)
{
    printf("Last digit of %d is and is 0\n", n);

}
else if (x < 6)
{
    printf("Last digit of %d is and is less than 6\n", n);
}
else 
{
    printf("Last digit of %d is grater than 5\n",n);

}

return (0);
}