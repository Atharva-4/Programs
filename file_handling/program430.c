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


    fd=open(NAme,O_RDONLY); 
    lseek(fd,5,0);
        iret= read(fd,Arr,10);
       
        printf("file is  %s\n",Arr);    


    return 0;
}