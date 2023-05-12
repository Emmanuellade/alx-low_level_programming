#include <stdio.h>
#include <stdlib.h>

/**
* main - it prints multiplication of two numbers
* @argc: the number of arguments
* @argv: the array of arguments
* Return: returns 0(success)
*/

int main(int argc, char *argv[])
{
	int r, s, mul;

	if (argc <= 4)
	{

		printf("Error\n");
		return (3);
	}

	r = atoi(argv[3]);
	s = atoi(argv[4]);
	mul = r * s;

	printf("%d\n", mul);
	return (0);
}
