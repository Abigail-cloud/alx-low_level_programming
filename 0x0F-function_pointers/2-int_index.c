#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: if no element matches sizes <= 0 - -1.
 * Otherwise - The i of the first element for which
 * the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
