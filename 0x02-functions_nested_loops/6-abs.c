#include "main.h"

/*
 *_abs -Entry point
 * Retrun : Always 0
 * */

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
