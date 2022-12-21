#include "head.h"

/**
 * main - reproduces a simple shell
 * @ac: number of arguments passe
 * @av: arguments
 * Return: 0 on success, -1 otherwise
 */
int main(__attribute__((unused)) int ac, char **av)
{
	execl("/bin/sh", av[1], NULL);
	return (0);
}
