// Write a C/C++ POSIX compliant program to check the following limits:
// (i) No. of clock ticks (ii) Max. no. of child processes
// (iii) Max. path length (iv) Max. no. of characters in a file name
// (v) Max. no. of open files/ process.

#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include<iostream>
#include<unistd.h>
int main()
{
using namespace std;
int res;

if((res=sysconf(_SC_CLK_TCK))==-1)
    cout<<"System doesnot support\n";
else
    cout<<"Number of Clock Tick:"<<res<<endl;
    
if((res=sysconf(_SC_CHILD_MAX))==-1)
    cout<<"System does not support\n";
else
    cout<<"Maximum Number of Child Process that process can create:"<<res<<endl;
    
if((res=pathconf("/", _PC_PATH_MAX))==-1)
    cout<<"System does not support\n";
else
    cout<<"Maximum Path Length:"<<res<<endl;
    
if((res=pathconf("/", _PC_NAME_MAX))==-1)
    cout<<"System does not support\n";
else
    cout<<"Maximum No.of Character in a filename:"<<res<<endl;
    
if((res=sysconf(_SC_OPEN_MAX))==-1)
    cout<<"System does not support\n";
else
    cout<<"Maximum Number of opened files per process:"<<res<<endl;
    
return 0;
}