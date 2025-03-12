#include<stdio.h>
#include<string.h>
int main()
{
    char Arr[]="python";
    char *str=Arr;

while(*str!='\0')
{
  printf("%c",*str);
        str++;
}

    return 0;
}