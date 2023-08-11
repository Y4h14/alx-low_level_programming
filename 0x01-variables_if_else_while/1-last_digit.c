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

x = n % 10;
if (x == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, x);
}
else if (x < 6)
{
	printf("Last digit of %d is %d and is less than 6\n", n, x);
}
else
{
	printf("Last digit of %d is %d and is grater than 5\n", n, x);

}

return (0);
}
