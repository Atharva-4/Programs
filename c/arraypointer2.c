#include<stdio.h>

int main()
{
    int arr[]={10,20,30,40,50};

    int *p=&(arr[1]);
    int *q=&(arr[3]);
  printf("%d",p[2]);
    printf("%d\n",arr[2]);
    printf("%d\n",*(2+arr));
    printf("%d\n",*(arr+2));
    printf("%d\n",2[arr]);

    return 0;
}