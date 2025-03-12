#include<iostream>

using namespace std;

class Demo
{
    public:
        int no1,no2;

        demo(int a,int b)
        {
            no1=a;
            no2=b;
        }
        //void display(Demo *this,int x)
        void Display(int x)
        {
            cout<<"value of no1 :"<<no1<<"\n";
            cout<<"value of no2 :"<<no2<<"\n";
            cout<<"value of no1 :"<<x<<"\n";
            
        }
};

int main()
{
    demo obj(11,21);
    obj.Display(51);
    return 0;
}