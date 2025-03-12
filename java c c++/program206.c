#include<iostream>

using namespace std;

int main()
{
    int no1=0;   
    int ans=0;   
    int mask=0x2;   
    cout<<"enter the nuber";
    cin>>no1;
    
    ans=no1&mask;
    
    if(ans==0)
    {
    cout<<"off";
    }
    else{
            cout<<"on";

    }

    return 0;
}
