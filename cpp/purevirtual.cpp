#include<iostream>

using namespace std;

class base
{

    public:
        int a,b;

        int addition(int no1,int no2)
        {
            return no1+ no2;
        }
        virtual int substraction(int no1,int no2)=0;

};

class derived :public base
{
    public:
        int x,y;

        int multiplication(int no1,int no2)
        {
            return no1*no2;
        }
        int substraction(int no1,int no2)
        {
            return no1-no2;
        }
};
int main()
{
    // base bobj;
    derived dobj;
    cout<<"addtion is : "<<dobj.addition(11,12)<<"\n";
    cout<<"substraction is : "<<dobj.substraction(11,12)<<"\n";
    cout<<"multiplication is : "<<dobj.multiplication(11,12)<<"\n";
    

    return 0;
}