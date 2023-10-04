#include <stdio.h>;

/**
 * main - print all arguments it receives
 * @argc: the number of the arguments
 * @argv: array of arguments
 *
 * Return: 0(Success)
 */

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
