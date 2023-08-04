#include <stdio.h>

/**
 * main - Entry point
 *@argc: arguments count
 *@argv: arguments vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
