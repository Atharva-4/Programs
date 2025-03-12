#include<iostream>

using namespace std;

class Demo
{
    public:
        int i,j;
        static int k;

        Demo()
        {
            i=10;
            j=20;
        }
        void fun()
        {
            cout<<"inside the non static fun";
            cout<<this->i<<"\n";
            cout<<this->j<<"\n";
            cout<<k<<"\n";
        }
        static void gun()
        {
            cout<<"inside the non static\n";
            cout<<k<<"\n";
        }

};
int Demo::k=30;
int main()
{
    cout<<"value of k is :"<<Demo::k<<"\n";
    Demo::gun();

    Demo obj1;
    Demo obj2;
    
    obj1.fun();
    obj2.fun();

    obj1.gun();
    obj2.gun();

    cout<<"Value of k using object"<<obj1.k<<"\n";
    cout<<"Value of k using object"<<obj2.k<<"\n";

    return 0;
}