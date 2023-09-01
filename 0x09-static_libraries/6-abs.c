#include "main.h"

/**
 * _abs - Entry point
 * @i: an intiger
 *
 * Return: retun a value a
 */

int _abs(int i)
{
int a;
if (i < 0)
{
	a = i * -1;
}
else
{
	a = i;
}

return (a);
}
