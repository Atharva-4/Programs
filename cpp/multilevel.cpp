#include<iostream>
using namespace std;

class base
{
    public:    
         int i,j;

         base()
         {
            cout<<"inside the constructor \n";
            i=10;
            j=20;
         }
         
         ~base()
         {
            cout<<"inside the destructor \n";
         }
         void Fun()
         {
            cout<<"inside bass  fun";
         }
};

class Derived :public base
{
    public:    
         int x,y;

        
         Derived()
         {
            cout<<"inside derived constructor \n";
            x=30;
            y=40;
         }
         
         ~Derived()
         {
            cout<<"inside derived destructor \n";
         }
         
         void gun()
         {
            cout<<"inside derived gun\n";
         }
};

class derivedx:public Derived
{
    public:
        int a,b;
        derivedx()
        {
            cout<<"inside derivedx constructor\n";
            a=50;
            b=60;
        }
        ~derivedx()
        {
            cout<<"inside derivedx destructor\n";
         
        }
        void sun()
        {
            cout<<"inside derivedx sun\n";
        }
};
int main()
{

    //Constructor ->base ->derived->derivedx.

    derivedx dobj;
    cout<<"inside main function\n";

    cout<<"size of base class"<<sizeof(base)<<"\n";     //8
    cout<<"size of derived class"<<sizeof(Derived)<<"\n";   //16
    cout<<"size of derivedx class"<<sizeof(derivedx)<<"\n";        //24
    
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    cout<<dobj.a<<"\n";
    cout<<dobj.b<<"\n";
   
    dobj.Fun();
    dobj.gun();
    dobj.sun();

  //destructor :derivedx-> derived-> base  
    return 0;
}