#include <string.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - the main function
 * @argc: number arguments
 * @argv: array of arguments
 * Return: always 0.
 */

int main(int argc, char **argv)
{
int num1, num2;
int (*result)(int, int);
char *op;
/*int (*func)(char*);*/

/*checking the number of arguments*/
if (argc != 4)
{
	printf("Error\n");
	exit(89);
}
/*assigning arguments and converting to integers*/
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = argv[2];

/*checking for zero divition*/
if (num2 == 0 && (strcmp(op, "/") == 0 || strcmp(op, "%") == 0))
{
	printf("Error\n");
	exit(100);
}

/*calculating the result*/
result = get_op_func(op);

/*printf("%d\n", answer);*/

/*checking if the operator is correct*/
if (!result)
{
	printf("Error\n");
	exit(99);
}

printf("%d\n", result(num1, num2));
return (0);
}
