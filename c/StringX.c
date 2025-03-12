#include<stdio.h>
#include<string.h>
int main()
{
    char Arr[]="python";
    printf("lenght of string is :%d \n",strlen(Arr));
    printf("sieze of the string : %d \n",sizeof(Arr));

    printf("%c",Arr[1]);
    printf("%c",Arr[4]);
    printf("%c",Arr[5]);

    return 0;
}