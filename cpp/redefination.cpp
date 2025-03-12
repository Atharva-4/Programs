#include<iostream>
using namespace std;

class base
{
    public:
        void fun()          //defination
        {
            cout<<"inside base fun\n";
        }

};

class derived : public base
{
    public:
        void fun()              //redefination
        {
            cout<<"inside derived fun\n";
        }

};

int main()
{
    cout<<sizeof(base)<<"\n";
    derived obj;
    obj.fun();

    base obj1;
    obj1.fun();
    return 0;
}