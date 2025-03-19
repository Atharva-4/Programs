#include<iostream>
using namespace std;

class array
{
    public:
        int  iValue1;
         int  *arr; 
        
     array(int a)
        {
            iValue1=a;
            
    arr=new int[iValue1];
        }

       void Display()
{
    int iCnt=0;
    for(iCnt=0;iCnt<iValue1;iCnt++)
    {
        
    cout<<arr[iCnt];
    }
}
       void Displayrevrese()
{
    int iCnt=0;

    while
    for(iCnt=0;iCnt<iValue1;iCnt++)
    {
        
    cout<<arr[iCnt];
    }
}

       void Accept()
{
    int iCnt=0;
    for(iCnt=0;iCnt<iValue1;iCnt++)
    {
    cin>>arr[iCnt];
    }
}

     ~array()
        {
    delete []arr;
            
        }

           
           
};
int main()
{   
    int iLength=0,iCnt=0,*arr=NULL;

    cout<<"entter the n array is";
    cin>>iLength;
 array aobj(iLength);
   aobj.Accept();
   aobj.Display();

    

    return 0;


}
    