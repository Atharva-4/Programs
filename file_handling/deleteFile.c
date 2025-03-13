#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


 
 int main()
 {
    char FileNAme[20];
    int FD=0;
    char Data[100]={'\0'};
    printf("Enter the file name that ypou want to open:\n");
    scanf("%s",FileNAme);
        unlink(FileNAme);
    return 0;
 }