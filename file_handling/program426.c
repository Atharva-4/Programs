#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    int iret=0;
    char NAme[30];
    char Arr[50]={'\0'};

    printf("please enter the file name open  ");

    scanf("%[^'\n']s",NAme);

   unlink(NAme);


    return 0;
}