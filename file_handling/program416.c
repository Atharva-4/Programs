#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd=0;
    char NAme[30];

    printf("please enter the file name");

    scanf("%[^'\n']s",NAme);

    fd=creat(NAme,0777); 

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