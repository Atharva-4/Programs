#include<stdio.h>

int addition(int a,int b)
{
    int sum=0;

    sum=a+b;
    return sum;
}

int substraction(int a,int b)
{
    int ans=0;

    ans=a-b;
    return ans;
}

int main()
{
    int Value1=0 , Value2=0 , ret=0;

    printf("enter first number \n");
    scanf("%d",&Value1);

    printf("enter second number \n");
    scanf("%d",&Value2);

    ret=addition(Value1,Value2);
    printf("addition of two numbers is %d\n",ret);

    
    ret=substraction(Value1,Value2);
    printf("addition of two numbers is %d\n",ret);

 return 0;
}