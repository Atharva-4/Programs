#include<iostream>
using namespace std;

class base
{
    public:
        int i,j;
        void fun()          //defination
        {
            cout<<"inside base fun\n";
        }
        void gun()          //defination
        {
            cout<<"inside base gun\n";
        }
        void sun()          //defination
        {
            cout<<"inside base sun\n";
        }
        void run()          //defination
        {
            cout<<"inside base run\n";
        }

};

class derived : public base
{
    public:
        int x,y;
        void fun()              //redefination
        {
            cout<<"inside derived fun\n";
        }
        void gun()           //redefination
        {
            cout<<"inside derived gun\n";
        }
        void sun()           //redefination
        {
            cout<<"inside derived sun\n";
        }
        void mun()          //defination
        {
            cout<<"inside derived mun\n";
        }


};

int main()
{
    cout<<"size of base class\n"<<siz
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