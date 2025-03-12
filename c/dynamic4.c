#include<stdio.h>
#include<stdlib.h>      ///standard library
int main()
{
 int *ptr=NULL;
//step 1 allocate the memory
ptr=(int *)malloc(5* sizeof(int));

    ptr=(int *)realloc(ptr,3* sizeof(int));
    
    ptr=(int *)realloc(ptr,7* sizeof(int));    

      ptr=(int *)realloc(NULL,7* sizeof(int));      //malloc 
      ptr=(int *)realloc(ptr,0);        //free() 
      

    
    return 0;
}