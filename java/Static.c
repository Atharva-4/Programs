#include<stdio.h>

void display()
{

    int i=10;
    static int j=10;

    i++;
    j++;

    printf("%d",i);
    printf("%d",j);
  
}

int main()
{
    


    return 0;
}