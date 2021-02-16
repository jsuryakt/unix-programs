// stat, fstat
// The stat and fstat function retrieves the file attributes of a given file.
// The only difference between stat and fstat is that the first argument of a stat is a file pathname, where as the first argument of fstat is file descriptor.

#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
using namespace std;
int main()
{
    struct stat stats;
    if(stat("sunil.txt", &stats) == 0) 
    {
        cout<<stats.st_dev<<endl; /* file system ID */
        cout<<stats.st_ino<<endl; /* file inode number */
        cout<<stats.st_mode<<endl; /* contains file type and permission */
        cout<<stats.st_nlink<<endl; /* hard link count */
        cout<<stats.st_uid<<endl; /* file user ID */
        cout<<stats.st_gid<<endl; /* file group ID */
        cout<<stats.st_rdev<<endl; /*contains major and minor device#*/
        cout<<stats.st_size<<endl; /* file size in bytes */
        cout<<stats.st_atime<<endl; /* last access time */
        cout<<stats.st_mtime<<endl; /* last modification time */
        cout<<stats.st_ctime<<endl; /* last status change time */

    }
return 0;
}