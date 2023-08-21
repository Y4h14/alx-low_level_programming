#include "main.h"
/**
 * swap_int - swaps two integers 
 * @*a: pointer to the first number
 * @*b: pointer to the secomnd number
 * 
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int s = 0;
s = *a; 
*a = *b;
*b = s;
}