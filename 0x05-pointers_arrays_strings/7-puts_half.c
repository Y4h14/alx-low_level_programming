#include "main.h"
/**
 * 
 */
 
void puts_half(char *str)
{
int i, j = 0, k; 
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0)
{
    j = (i - 1) / 2; 
}
else
{
    j = i / 2; 
}
for (k = j; k <= i; k++)
{
    _putchar(str[k]);
}
_putchar('\n');

}