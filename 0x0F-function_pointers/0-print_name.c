#include "function_pointers.h"
/**
* print_name - print name pointing to a function
* @name: name of the person
* @f: points to the function
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != '\0')
	f(name);
}
