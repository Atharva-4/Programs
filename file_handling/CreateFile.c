#include<stdio.h>
// #include<fcntl.h>
#include<io.h>

 
 int main()
 {
    char FileNAme[20];
    int FD=0;

    printf("Enter the file name that ypou want to creat:\n");
    scanf("%s",FileNAme);

    FD=creat(FileNAme,0777);
    if(FD==-1)
    {
            printf("unnballe to ccreate:\n");

    }
    else
    {
            printf("Enter the file is creted %d\n",FD);

    }
    return 0;
 }