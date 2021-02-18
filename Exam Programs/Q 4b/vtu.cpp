// Print first 10 Characters, skip next 5 and then again print next 10 characters.
#include <unistd.h>
#include <fcntl.h>
#include<sys/types.h>
using namespace std;
int main()
{
    int fd = open("vtu.txt", O_RDWR, 0);
    char buf[10];
    
    read(fd, buf, 10);
    printf("FIRST 10 %s", buf);
    
    lseek(fd, 5, SEEK_CUR);
    
    read(fd, buf, 10);
    printf("\nNEXT 10 %s", buf);
    
    return 0;
}