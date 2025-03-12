#include<stdio.h>

struct demo 
{
    int no;
    float f;

};

struct ppa
{
    int x;
    struct demo dobj;
    int y;
};

int main ()
{
    struct ppa obj;
    obj.x=10;
    obj.y=20;
    
    obj.dobj.no=11;
    obj.dobj.f=11.11;
    
    printf("%d\n",obj.dobj.no);
    

    return 0;
}