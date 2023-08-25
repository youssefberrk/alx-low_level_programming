#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first_print - Prints a message before the main function is executed
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
