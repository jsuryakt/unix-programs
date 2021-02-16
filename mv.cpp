#include <iostream.h>
#include <unistd.h>
#include<string.h>
int main ( int argc, char *argv[ ])
{
if (argc != 3 || strcmp(argv[1],argcv[2]))
cerr<<”usage:”<<argv[0]<<””<old_link><new_link>\n”;
else if(link(argv[1],argv[2]) == 0)
return unlink(argv[1]);
return 1;
}
