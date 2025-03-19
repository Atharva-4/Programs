#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char NAme[30];

    printf("please enter the file name open  ");

    scanf("%[^'\n']s",NAme);

    fd=open(NAme,O_RDWR); 

    if(fd==-1)
    {
        printf("incalid");
    }
    else
    {
        printf("file is susccessfull %d",fd);
    }

    return 0;
}