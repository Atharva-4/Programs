#include<stdio.h>

struct Demo
{
    int no;         //4
    float f;        //4
    int arr[3];     //12
    int x;          //4
};
int main ()
{
    struct Demo obj;
    obj.no=11;
    obj.f=90.99;
    obj.x=21;

    obj.arr[0]=10;
    obj.arr[1]=11;
    obj.arr[3]=30;

    return 0;
}