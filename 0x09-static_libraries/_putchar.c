#include "main.h"
/**
 * _putchar - print a charecter
 * @c: a char
 * Return: always 0;
 */
int _putchar(char c)
{
extern long write(int, const char *, unsigned long);
(void)write(1, &c, 1);
return (0);
}
