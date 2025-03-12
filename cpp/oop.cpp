#include<iostream>

using namespace std;


class Arithematic
{
    public:

        int no1;
        int no2;

        Arithematic(int a,int b)
        {
            no1=a;
            no2=b;
        }

    int addition()
    {
        int sum=0;

        sum=no1+no2;
        return sum;
    }

    int substraction()
    {
        int ans=0;

        ans=no1-no2;
        return ans;
    }
 
};

int main ()
{   
     int Value1=0 , Value2=0 , ret=0;

    cout<<"enter first number :\n";
    cin>>Value1;

    
    cout<<"enter second number :\n";
    cin>>Value2;
    
    Arithematic obj(Value1,Value2);
    ret= obj.addition();
    cout<<"addition is :\n"<<ret<<"\n";
   
    ret= obj.substraction();
    cout<<"substraction is :\n"<<ret<<"\n";
    
 return 0;
}