#include<iostream>
using namespace std;

class demo
{
    public :
        int no1,no2;
        demo()
        {
            no1=0;
            no2=0;
        }

        demo(int a,int b)
        {
            no1=a;
            no2=b;
        }
            demo(demo &ref)
        {
            a=ref.a;
                 b=ref.b;
        }
    
        ~demo()
        {
            
            cout<<"inside destructor\n";
        }    
        
};
int main()
{
    
    demo obj(11,21);
    demo obj2(obj);  
    
    return 0;
}