#include "head.h"

/**
 * main - reproduces a simple shell
 * @ac: number of arguments passe
 * @av: arguments 
 * @env: the environments of the proces
 * Return: 0 on success, -1 otherwise
 */
int main(__attribute__((unused)) int ac, char **av, __attribute__((unused)) char **env)
{
	char *argv[] = {"/bin/sh", NULL};

	execve(argv[0], av + 1, NULL);
	return (0);
}
