#include "main.h"
/**
* print_times_table - prints the times table
*@n: number of time tables 
*/

void print_times_table(int n)
{
int i; 
int j; 
int k;    
if (n > 15 || n < 0)
{
    return; 
}
for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
	{
		k = i * j;
		if (k < 10)
		{
			if (j == 0)
			{
				_putchar(k + '0');
				_putchar(',');
			}
			else if(j != n)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		else if (k >= 10)
		{
            if (k >= 100)
            {
                _putchar(' ');
                _putchar((k / 100) + '0');
			    _putchar((k / 10) + '0');
			    _putchar((k % 10) + '0');
			    if (j != n)
			    {
			    _putchar(',');
			    }	
            }
            
			_putchar(' ');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			if (j != n)
			{
			_putchar(',');
			}	
		}
	}
	_putchar('\n');
}

}