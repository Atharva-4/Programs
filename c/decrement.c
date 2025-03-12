#include<stdio.h>
int main()
{  
    int A=10,B=10;

    int No1=0,No2=0;

    No1=A--;                        //post decrement(first initialised then decrement)
    printf("value of No1 ;%d\n",No1);           
    printf("value of A: %d\n",A);

    No2=--B;                    //pre  decremenent(first decrement then initialised)
    printf("value of No2 :%d\n",No2);
    printf("value of B: %d\n",B);
    


    return 0;
}