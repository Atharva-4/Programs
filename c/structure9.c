#include<stdio.h>

struct demo
{
    int no;
    struct demo *ptr;

}; 

int main()
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    obj1.no=11;
    obj2.no=21;
    obj3.no=31;

    obj1.ptr=&obj2;
    obj2.ptr=&obj1;
    obj3.ptr=NULL;    

    return 0;
}