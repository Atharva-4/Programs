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
     struct Demo obj;
     struct Demo *ptr=&obj;

     ptr->no=11;
     ptr->f=3.55;
     ptr->d=50.2654;
     ptr->i=90;

     printf("%d\n",ptr->no);


    return 0;
}