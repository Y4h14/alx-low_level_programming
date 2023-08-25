#include "main.h"
/**
 * string_toupper - changes lower case to upper 
 * @s: a string
 * Return: a char
 */

char *string_toupper(char *s)
{
int i ;
for (i = 0; s[i] != 0; i++)
{
if (s[i] >='a' && s[i] <='z')
{
    s[i] -= 32; 
}
}

return (s);
}