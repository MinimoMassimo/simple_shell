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

/*functions*/
int main(int ac, char **av);

#endif
