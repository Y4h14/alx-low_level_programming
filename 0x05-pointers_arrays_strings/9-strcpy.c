#include "main.h"
/**
 * 
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
/* char temp;*/  
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}