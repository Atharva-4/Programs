#include<stdio.h>
 
 int main()
 {
    int A=10;

    const int B=10;

    A++;        //allowed
    B++;        //not allowed

    return 0;
 }