//Program to find POSIX VERSION

#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L

#include<iostream>
#include<unistd.h>

using namespace std;

int main()
{

#ifdef _POSIX_VERSION
    cout<<"System conforms to POSIX"<<_POSIX_VERSION<<endl;
#else
    cout<<"_POSIX_VERSION undefined\n";
#endif

return 0;
}

//OR 

//SHORT VERSION

#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
if(_POSIX_VERSION)
    cout<<"System conforms to POSIX"<<_POSIX_VERSION<<endl;
else
    cout<<"_POSIX_VERSION undefined\n";
return 0;
}