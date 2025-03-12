#include<iostream>

using namespace std;

class Demo
{
    public:
        int i;
    protected:
        int k;
    private:
        int j;
    public:
        Demo()
        {
            i=10;
            j=20;
            k=30;
        }

    friend void fun();
};
void fun()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";
         
}
int main()
{
    
 fun();
    return 0;
}