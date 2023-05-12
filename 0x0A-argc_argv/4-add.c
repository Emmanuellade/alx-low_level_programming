#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
	int c, d, sum = 0;

	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if (argv[c][d] < '0' || argv[c][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[c]);
	}

	printf("%d\n", sum);

	return (0);
}
