// Print HELLO VTU in Parent and HELLO VTU BELGAUM in Child

#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{

pid_t pid;

if ((pid = fork()) < 0)
    printf("fork error");
if (pid > 0) { 
    printf("HELLO VTU\n"); // In Parent
} 
if (pid == 0)
{ 
    printf("HELLO VTU BELGAUM\n"); // In Child
}
return(0);
}