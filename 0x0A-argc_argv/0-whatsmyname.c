#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: intger
 * @argv: string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
return (0);
}
