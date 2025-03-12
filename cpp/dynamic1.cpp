#include<iostream>
using namespace std;

int main(){

    int arr[7];

    int *ptr=NULL;
    
    //step1: allocate the memory
    ptr=new int[5];

    //step 3: use the memory
    //logic

    //step3: deallocate the memory
    delete []ptr;

    return 0;
}