#include <stdio.h>
#include<fcntl.h>
#include<iostream>
using namespace std;
int main()
{
    int fdesc=open("sunil.txt",O_RDWR); 
    cout<<fdesc<<endl;
    
    int cur_flag=fcntl(fdesc,F_GETFL);
    cout<<"Current Flags "<<cur_flag<<endl;
    
    int rc=fcntl(fdesc,F_SETFL,cur_flag | O_APPEND | O_NONBLOCK);
    cout<<"Set Flag "<<rc<<endl;
    
    cout<<fdesc<<" close-on-exec "<<fcntl(fdesc,F_GETFD)<<endl;
    (void)fcntl(fdesc,F_SETFD,1);
    
    if(fcntl(fdesc,F_DUPFD,1)==-1)  
        perror("fcntl");
    int newfd = fcntl(fdesc,F_DUPFD,1);
    cout<<newfd<<endl;
    
    return 0;
}
