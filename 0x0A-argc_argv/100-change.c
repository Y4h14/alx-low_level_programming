#include <stdio.h>
#include <stdlib.h>
/**
 * main - print min number of change
 * @argc: int
 * @argv: string
 *
 * Return: 0 when success 1 otherwise
 */

int main(int argc, char *argv[])
{
int numCoins, cents;
if (argc != 2)
{
	printf("Error\n");
	return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
	printf("0\n");
	return (0);
}
numCoins = 0;
while (cents > 0)
{
	if (cents >= 25)
	{
		cents -= 25;
	}
	else if (cents >= 10)
	{
		cents -= 10;
	}
	else if (cents >= 5)
	{
		cents -= 5;
	}
	else if (cents >= 2)
	{
		cents -= 2;
	}
	else
	{
		cents -= 1;
	}
	numCoins++;
}
printf("%d\n", numCoins);
return (0);
}
