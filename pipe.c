// PROGRAM: shows the code to create a pipe between a parent and its child and to send data down the pipe.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
int fd[2];
pid_t pid;
char line[100];

if (pipe(fd) < 0)
    printf("pipe error");
    
if ((pid = fork()) < 0)
    printf("fork error");
else if (pid > 0) { 
    /* parent */
    close(fd[0]);
    write(fd[1], "Hello World", sizeof("Hello World"));
} 
else 
{ 
    /* child */
    close(fd[1]);
    if(read(fd[0], line, sizeof(line)) == -1)
        perror("read");
    printf("%s",line);
}
exit(0);
}