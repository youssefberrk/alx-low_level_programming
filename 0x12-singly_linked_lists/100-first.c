#include <stdio.h>
#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first - Function executed before the main function
 *
 * This function is marked with the `constructor` attribute, ensuring that it
 * is automatically executed before the `main` function. It prints a message
 * indicating that the program is starting.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
