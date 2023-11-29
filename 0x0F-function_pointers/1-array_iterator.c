#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute function on each element
 * @array: array of the function
 * @size: size of the array
 * @action:function to perform action on array iteration
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)

		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
