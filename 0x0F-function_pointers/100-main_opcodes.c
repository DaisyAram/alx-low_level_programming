#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argv:array of argument
 * @argc: argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes, j;
	char *b;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	b = (char *)main;
	for (j = 0; j < bytes; j++)
	{
	if (j == bytes - 1)
	{
	printf("%02hhx\n", b[j]);
	break;
	}
	printf("%02hhx", b[j]);
	}
	return (0);
}
