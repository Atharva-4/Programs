#include<iostream>
using  namespace std;

class Demo
{
    public:
     int a;       
    private:
    int b;
    public:
    Demo() 
    {
       a=11;
        b=21;
    }
    void fun()
    {
        cout<<"value of a is"<<a<<"\n";//allowed
        cout<<"value of a is"<<b<<"\n";//allowed
    }
};

int main()
{
    Demo obj;
    obj.fun();
    cout<<"value of a is"<<obj.a<<"\n";//allowed
    cout<<"value of a is"<<obj.b<<"\n";//na
    

    return 0;
}