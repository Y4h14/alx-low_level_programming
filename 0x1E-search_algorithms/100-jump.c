#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * jump_search - implementaion of the jump search algorithm
 * @array: the array to search
 * @size: the number of elements
 * @value: the value to search for
 * Return: the index of value if found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt((int)size), base = 0;

	if (array == NULL)
		return (-1);

	while (jump < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n",
				base, array[base]);
		if (array[jump] < value)
		{
			base = jump;
			jump += jump;
			continue;
		}
		else
		{
			printf("Value found between indexes [%d] and [%d]\n",
					base, jump);
			if (jump < (int)size)
			{
				for (; base <= jump; base++)
				{
					printf("Value checked array[%d] = [%d]\n",
					base, array[base]);
					if (array[base] == value)
						return (base);
				}
			}
			else
				break;
			base = jump;
			jump += jump;
		}
	}
	return (-1);
}
