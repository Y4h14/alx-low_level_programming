#include <stdio.h>
/**
* main - sums number divisibal by 5,3
*
* Return: always 0
*/
int main(void)
{
int sum = 0;
int i = 0;
while (i < 1024)
{
	if ((i % 5) == 0 || (i % 3) == 0)
	{
		sum += i;
	}
	i++;
}
printf("%d\n", sum);
return (0);
}
