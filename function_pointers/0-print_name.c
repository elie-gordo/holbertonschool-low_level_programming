#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	f(name);
}
