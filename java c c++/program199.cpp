#include<stdio.h>

void reverseX(char *ptr)
{
    char *p=ptr;
    
    while(*p!='\0')
    {
    p++;
    }
    p--;

    while(p>=ptr)
    {
        printf("%c",*p);

    p--;
    }
}
int main()
{
    char arr[30];
    char *ptr=arr;
    int iRet=0;

    printf("enter the\n");
    scanf("%[^'\n']s",arr);

    reverseX(arr);
    

    return 0;
}