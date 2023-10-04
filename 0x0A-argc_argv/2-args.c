#include <stdio.h>;
#include "main.h"

/**
 * main - print all arguments it receives
 * @argc: the number of the arguments
 * @argv: array of arguments
 *
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count <= argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
