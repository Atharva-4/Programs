#include<iostream>

using namespace std;

class Demo
{

    public :
        int a;
        int b;

        void  fun()
        {
        cout<<"insde fun\n";

        }

        void gun()
        {
        cout<<"insde gun\n";

        }


};

int main()
{
    Demo obj;

    cout<<sizeof(obj)<<"\n";

    obj.a=11;
    obj.b=21;

    obj.fun();
    obj.gun();

    cout<<obj.a<<"\n";
    cout<<obj.b<<"\n";
    

    return 0;
}

//7.30
