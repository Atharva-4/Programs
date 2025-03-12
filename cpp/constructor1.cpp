#include<iostream>

using namespace std;


class marvellous
{
    public:

        int no1;
        int no2;

        marvellous()
        {
            cout<<"inside  default  constructor\n";
            no1=1;
            no2=2;
        }
        marvellous(int a,int b)
        {
           cout<<"inside paratmerised construstor\n";    
            no1=a;
            no2=b;
        }
        ~marvellous()
        {
            cout<<"inside destructor\n";
        }    
        void fun()
        {
            cout<<"inside fun\n";
        }      
};

int main ()
{

    marvellous mobj1;
    marvellous mobj2(11,21);


    return 0;
}
//8.30
//10.00