#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	size_t chars;
	size_t bufsize = 100;
	char *buff;

	buff = (char *)malloc(bufsize * sizeof(char));
	if (buff == NULL)
		return (-1);
	while (buff[0] != EOF)
	{
		printf("$");
		chars = getline(&buff, &bufsize, stdin);
	
		system(buff);
	}
}
