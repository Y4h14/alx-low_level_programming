#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: a string
 * @src: source string
 * @n: int for the number of bytes
 * 
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i; 
for (i = 0; i < n ; i++)
{
    dest[i] = src [i];
}

}