#include <stdio.h>
#include "main.h"

/**
 * main - print all args
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
