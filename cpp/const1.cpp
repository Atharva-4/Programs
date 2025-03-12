#include<iostream>

using namespace std;


int main()
{
   int no1=10;

   const int no2=10;

    no1++; //alloweed
    no2++;  //na
    
    no1=21;
    no2=21;

    return 0;
}