#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd=0;
    fd=creat("MArvellous.txt",0777); 

    if(fd==-1)
    {

        printf("incalid");
    }
    else
    {
        printf("file is susccessfull");
    }

    return 0;
}