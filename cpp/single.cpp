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
            cout<<"inside derived gun";
         }
};
int main()
{
     base bobj;
    Derived dobj;
    cout<<"inside main function\n";

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    cout<<sizeof(bobj)<<"\n";

     cout<<sizeof(dobj)<<"\n";

    dobj.Fun();
    
    dobj.gun();
    return 0;
}