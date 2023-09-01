#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: int
 * @argv: string
 * Return: 0 when success and 1 otherwise
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
printf("%d\n", num1 * num2);
return (0);
}
