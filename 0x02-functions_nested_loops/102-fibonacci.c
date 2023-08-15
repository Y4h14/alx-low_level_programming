#include <stdio.h>
/**
* main - prints the  50 febonachi numbers
*
* Return: always 0
*/
int main(void)
{
long int i, j, k, next;
j = 1;
k = 2;
for (i = 1; i < 51; i++)
{
	if (i != 50)
	{
		printf("%ld, ", j);
	}
	else
	{
		printf("%ld\n", j);
	}
	next = j + k;
	j = k;
	k = next;
}
return (0);
}
