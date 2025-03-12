#include<iostream>
using namespace std;

class base1
{
    public :
        int i,j;
        base1()
        {
            cout<<"inside base1 constructor\n";
            i=10;
            j=20;
        }
        ~base1()
        {
            cout<<"inside base1 destructor\n";
        }

        void gun()
        {
            cout<<"inside gun of base1\n";
        }
};
class base2
{
    public :
        int x,y;
        base2()
        {
            cout<<"inside base2 constructor\n";
            x=30;
            y=40;
        }
        ~base2()
        {
            cout<<"inside base2 destructor\n";
        }

        void gun()
        {
            cout<<"inside gun of base1\n";
        }
};

class derived :public base1,public base2
{
    public:
    int a,b;
    derived()
    {
        cout<<"inside the derived constructor\n";
        a=50;
        b=60;
    }
     ~derived()
        {
            cout<<"inside derived destructor\n";
        }

        void sun()
        {
            cout<<"inside gun of base1\n";
        }
};
int main()
{
        base1 bobj;
        base2 b2obj;
        derived dobj;
        cout<<sizeof(base1)<<"\n";
        cout<<sizeof(base2)<<"\n";
        cout<<sizeof(derived)<<"\n";

    return 0;
}