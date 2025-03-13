#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    int iret=0;
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
        printf("file is susccessfull open %d\n",fd);
        iret= write(fd,"Jay Ganesh",10);
       
        printf("file is  %d\n",iret);
        close(fd);
    }


    

    return 0;
}