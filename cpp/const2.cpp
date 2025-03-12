#include<iostream>
using namespace std;

class demo
{
    public:
        
        int no1,no2;
        int const no3,no4;

        demo(): no3(30),no4(40)
        {
            no1=10;
            no2=20;
        }
        demo (int a,int b,int c,int d): no3(c),no4(d)
        {
            no1=a;
            no2=b;
        }
};
int main()
{
    demo obj;
    cout<<obj.no1<<"\t"<<obj.no2<<"\t"<<obj.no3<<"\t"<<obj.no4<<"\n";
    demo obj2(11,21,31,41);
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\t"<<obj2.no3<<"\t"<<obj2.no4<<"\n";

    return 0;
}
