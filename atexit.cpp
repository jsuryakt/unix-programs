//This declaration says that we pass the address of a function as the argument to atexit. When this function is called,
//it is not passed any arguments and is not expected to return a value. The exit function calls these functions in
//reverse order of their registration. Each function is called as many times as it was registered.

//Example of exit handlers

#include <stdlib.h>
#include<stdio.h>
static void my_exit1(void);
static void my_exit2(void);
int main(void)
{
if (atexit(my_exit2) != 0)
    printf("can't register my_exit2");
if (atexit(my_exit1) != 0)
    printf("can't register my_exit1");
if (atexit(my_exit1) != 0)
    printf("can't register my_exit1");
    
printf("main is done\n");
return(0);
}
static void my_exit1(void)
{
printf("first exit handler\n");
}
static void my_exit2(void)
{
printf("second exit handler\n");
}