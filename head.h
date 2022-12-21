#ifndef HEAD_H
#define HEAD_H

#include <stdlib.h>
#include <stdio.h>

/*for fork()*/
#include <sys/types.h>

/*for wait()*/
#include <sys/wait.h>

/*for execve()*/
#include <unistd.h>

/*for strstr()*/
#include <string.h>

/*functions*/
int main(int ac, char **av);
/*int main(void);*/

#endif
