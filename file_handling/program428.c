#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    int iret=0;
    char NAme[30];
    char Arr[50]={'\0'};
    char rr[50]={'\0'};

    printf("please enter the file name open  ");

    scanf("%[^'\n']s",NAme);


    fd=open(NAme,O_RDONLY); 
    
        iret= read(fd,Arr,5);
       
        printf("file is  %s\n",Arr);    
        iret= read(fd,rr,5);
       
        printf("file is  %s\n",rr);
        
        


    return 0;
}