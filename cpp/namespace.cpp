#include<iostream>

using namespace std;

namespace Marvellous
{

    class Demo
    {
        public:
         void Display()
        {
            cout<<"isnidse display method \n";
        }
    };
}
int main()
{   
    using namespace Marvellous;
    Demo obj();
    return 0;
}