#include<iostream>
using namespace std;

class base
{
    public:
        int i,j;
        virtual void fun()          //1000
        {
            cout<<"inside base fun\n";
        } 
        virtual void gun()          //defination
        {
            cout<<"inside base gun\n";
        }
        virtual void sun()          //3000
        {
            cout<<"inside base sun\n";
        }
         virtual void run()          //4000
        {
            cout<<"inside base run\n";
        }


};

class derived : public base
{
    public:
        int x,y;
        virtual void fun()              //5000
        {
            cout<<"inside derived fun\n";
        }
        void gun()           //6000
        {
            cout<<"inside derived gun\n";
        }
        virtual void mun()          //7000
        {
            cout<<"inside derived mun\n";
        }
        void run()          //8000
        {
            cout<<"inside derived run\n";
        }    

};

int main()
{
 

    cout<<sizeof(base)<<"\n";
    cout<<sizeof(derived)<<"\n";

    derived dobj;
    base *bptr=NULL;
         
    bptr=&dobj;        //upcasting
    bptr->fun();
    bptr->gun();
    bptr->sun();
    bptr->run();
    // bptr->mun();

    return 0;
}