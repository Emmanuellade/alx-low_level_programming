#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - this is the string before the
 * execution of the main function file
 */

void hare(void)

{

	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");

}
