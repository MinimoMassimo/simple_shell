#include "head.h"

int main(void)
{
	size_t bufsize = 100;
	char *buff;
	int i;
	char *str;

	buff = (char *)malloc(bufsize * sizeof(char));
	if (buff == NULL)
		return (-1);

	while (i == 0)
	{
		printf("$");
		getline(&buff, &bufsize, stdin);
 
		if (strstr(buff, "exit") != NULL)
			return (-1);
		system(buff);
	}
	return (0);
}
