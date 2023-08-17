#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Print a given name using a function pointer.
 * @name: The name to be printed.
 * @f: A pointer to a function that formats and prints the name.
 *
 * This function takes a name and a function pointer as arguments.
 * If the name and function pointer are not NULL, it calls the
 * provided function to print the name.
 *
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char pointer and
 *     returns void. This function should format and print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
