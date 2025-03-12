#include<stdio.h>

# pragma pack(1)

struct Demo 
{
    int no=11;//na
    float f;
    double d;
    int i;
};
int main()
{
     struct Demo obj;
     struct Demo *ptr=&obj;

 
     printf("%d\n",ptr->no);


    return 0;
}
//errror