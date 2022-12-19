#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buff;
	size_t bufsize = 32;
	size_t chars;

	buff = (char *)malloc(bufsize * sizeof(char));
	if (buff == NULL)
		return (-1);
	while (buff[0] != EOF)
	{
		printf("$");
		chars = getline(&buff, &bufsize, stdin);
		system(buff);
	}
	return (0);
}
