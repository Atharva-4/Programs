#include<stdio.h>

//function Definations
int Addition(int value1, int value2)
{
int Result= 0;                              //local variable
Result=value1+value2;

return Result;
}

int main()                                           //Entry point function   
{

    int No1=0,No2=0,Ans=0;                          //local variable
    printf("Enter first Number :\n");
    scanf("%d",&No1);
    printf("Enter second Number :\n");
    scanf("%d",&No2);

    Ans=Addition(No1,No2);                          //function call
    printf("Addition of two number is: %d",Ans);
    return 0;
}