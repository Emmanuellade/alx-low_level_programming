#include <stdio.h>
#include "main.h"

/**
 * main - it prints the name of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", *argv);

	return (0);
}
