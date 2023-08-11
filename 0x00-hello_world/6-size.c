#include <stdio.h>
/* main -Printing using printf */
int main(void)
{

int intType;
long int  longIntType;
long long int doubleType;
char charType;
float floatType;

printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(longIntType));
printf("Size of a long long int: %zu bytes\n", sizeof(doubleType));
printf("Size of an float: %zu bytes\n", sizeof(floatType));

return (0);
}