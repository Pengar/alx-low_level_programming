#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives
 * @argc: arguments number
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
