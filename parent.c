#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("--beginning of a program ... \n");

    int counter = 0;
    pid_t pid = fork();

    char *myargs [] = { NULL };
    char *myenv [] = { NULL };

    if (pid == 0)
    {
        // child process
        // exit(1); // morir al nacer 
        // execve ("./auxiliar", myargs, myenv);  // hijo simple      
        execve ("./a.out", myargs, myenv);  // recursion

        // int i = 0;
        // for (; i < 5; ++i)
        // {
        //     printf("child process: counter=%d\n", ++counter);
        // }
    }
    else if (pid > 0)
    {
        // parent process
        // exit(1); // padre muere tras fork (tener hijo)
        int j = 0;
        for (; j < 5; ++j)
        {
            printf("parent process: counter=%d\n", ++counter);
        }
    }
    else
    {
        // fork failed
        printf("fork() failed!\n");
        return 1;
    }

    printf("my pid was %d --end of program--\n",pid);

    return 0;
}