#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiples two numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line aguments
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[i]) * atoi(argv[2]));
	return (0);
}
