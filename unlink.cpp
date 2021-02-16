#include<iostream.h>
#include<stdio.h>
#include<unistd.h>
int main(int argc, char* argv)
{
cout<<unlink(argv[1]);
return 0;
}
