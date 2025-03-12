#include<iostream>
using  namespace std;

class Demo
{
    public:

        int Addition(int a,int b)       //Addition@2ii
        {
            return a+b;
        }

        double Addition(double a,double b)              //Addition@2dd
        {
            return a+b;
        }
        int Addition(int a,int b,int c)
        {
            return a+b+c;
        }

};

int main()
{
    Demo obj;
    cout<<obj.Addition(10,11)<<"\n";
    cout<<obj.Addition(10.11,11.12)<<"\n";
    cout<<obj.Addition(10,11,21)<<"\n";
    

    return 0;
}