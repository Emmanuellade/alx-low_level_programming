#include <stdio.h>
#include <stdlib.h>

/**
* main - prints multiplication of two numbers
* @argc: is the number of arguments
* @argv: is the array of arguments
* Return: returns 0 (success)
*/

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc <= 2)
	{

		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
