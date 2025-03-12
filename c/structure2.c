#include<stdio.h>

# pragma pack(1)

struct Demo 
{
    int no;
    float f;
    double d;
    int i;
};
int main()
{
    // objcect delcaration
     struct Demo obj;
     struct Demo obj2;

    printf("%d\n",sizeof(obj));

    obj.no=11;
    obj.f =3.10;
    obj.d=10.29929;
    obj.i=99;

    obj2.no=110;
    obj2.f =3.90;
    obj2.d=880.29929;
    obj2.i=9;
    
    printf("%d\n",obj.no);
    printf("%d\n",obj2.no);

    return 0;
}