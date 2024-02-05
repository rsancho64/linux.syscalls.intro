#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    // just die
    pid_t pid = getpid();
    printf("my pid was %d --end--\n", pid);
}