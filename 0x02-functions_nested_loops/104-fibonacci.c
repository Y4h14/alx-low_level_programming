#include <stdio.h>
/**
* main -prints febonachi numbers
*
* Return: always 0
*/
int main(void)
{
long int i, j, k, next;
j = 1;
k = 2;
for (i = 1; i < 99; i++)
{
	if (i != 98)
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
