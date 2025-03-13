#include<iostream>

using namespace std;

float Addition(float no1,float no2)
{
    float ans =0;
    ans=no1+no2;
    return ans;
}

int main()
{
    float iRet=0;

    iRet=Addition(11.7f,10.9f);

    cout<<"additions is  "<<iRet<<"\n";

    return 0;
}