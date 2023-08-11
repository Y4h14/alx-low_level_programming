#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{

int intType;
long int  longIntType;
long long int doubleType;
char charType;
float floatType;

printf("Size of char: %lu byte\n",(unsigned long)sizeof(charType));
printf("Size of an int: %lu bytes\n", (unsigned long)sizeof(intType));
printf("Size of a long int: %lu bytes\n", (unsigned long)sizeof(longIntType));
printf("Size of a long long int: %lu bytes\n", (unsigned long)sizeof(doubleType));
printf("Size of an float: %lu bytes\n", (unsigned long)sizeof(floatType));

return (0);
}