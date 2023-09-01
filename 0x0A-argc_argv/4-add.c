#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: int
 * @argv: string
 * Return: 0 when success and 1 otherwise
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;
int x;
if (argc == 0)
{
	printf("0\n");
	return (0);
}
for (i = 1; i <= argc; i++)
{
	x = atoi(argv[i]);
	if (!x)
	{
		printf("Error\n");
		return (1);
	}
	sum += argv[i]
}
printf("%d\n", sum);
return (0);
}
