#include "function_pointers.h"

/**
 * array_iterator - executes a function on each array element
 * @array: input array
 * @size: size of array
 * @action: function pointer to apply
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == 0 || action == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
