#include<iostream>
#include<stdio.h>
#include<unistd.h>
using namespace std;
int main(int argc, char** argv)
{
if(argc!=3)
{
cerr<<"usage:"<<argv[0]<<"<src_file><dest_file>\n";
return 0;
}
if(link(argv[1],argv[2])==-1)
{
perror("link");
return 1;
}
return 0;
}
