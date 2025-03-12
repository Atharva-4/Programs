#include<iostream>
using namespace std;

float circle(float rad,int pie=3.14f)
{
    float abs=0.0f;
    abs= pie*rad*rad;
    return abs;
}
int main()
{
    float ret=0.0f;

    ret =circle(10.5f,3.14f);
    cout<<"area of circle"<<ret;    

        ret =circle(10.5f);
    cout<<"area of circle"<<ret;   
    
        ret =circle(10.5f,7.20f);
    cout<<"area of circle"<<ret; 
    
    return 0;
}