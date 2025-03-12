#include<stdio.h>

int main()
{
  int i=11;
  float f=18.28;
  double d=94.494949;
  char c='D';
  printf("%d\n",sizeof(c)); //1
  printf("%d\n",sizeof(i)); //4
  printf("%d\n",sizeof(f)); //4
  printf("%d\n",sizeof(d)); //8


    return 0;
}