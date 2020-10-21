#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes function on array given
* @array: elements
* @size: size
* @action: pointer to function
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != '\0')
	{
		for (i = 0; i != size; i++)
			action(array[i]);
	}
}
