#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: arguments number
 * @argv: array arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int p = 0;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
