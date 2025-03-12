#include<iostream>
using namespace std;

class base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        base()
        {
            i=10;
            j=20;
            k=30;
        }    
        void gun()
        {
            cout<<i<<"\n";          //allowed
            cout<<j<<"\n";         //allowed
            cout<<k<<"\n";          //allowed
        }

};
class Derived: public base
{
    public:
        void fun()
        {
            cout<<i<<"\n";          //allowed
            // cout<<j<<"\n";         //na
            cout<<k<<"\n";          //allowed
        }
};

int main()
{
    base bobj;
             cout<<bobj.i<<"\n";          //allowed
             
    cout<<sizeof(bobj)<<"\n";
            // cout<<bobj.j<<"\n";         //na
            // cout<<bobj.k<<"\n";          //na

    return 0;
}