#include<iostream>
using namespace std;

template <class T>
struct node
{
    int data;
    struct node *next;
};

template <class T>
class SinglyCL
{
    public:
        struct node<T> * head;
        struct node<T> * tail;
        int iCount;

        SinglyCL();

        void InsertFirst(T no);

        void InsertLast(T no); 
        void DeleteFirst();

        void DeleteLast();

        void Display();
        

        void InsertAtPos(T no, int ipos);
        
        void DeleteAtPos(int ipos);
        int Count();

};
template <class T>
 SinglyCL<T>::SinglyCL()
        {
            head = NULL;
            tail = NULL;
            iCount = 0;
        }
        template <class T>
        void SinglyCL<T>:: InsertFirst(T no)
        {
            struct node<T> * newn = new node<T>;
            newn->data = no;
            newn->next = NULL;

            if((head == NULL) && (tail == NULL))    
            {
                head = newn;
                tail = newn;
            }
            else
            {
                newn->next = head;
                head = newn;
            }
            tail->next = head;
            iCount++;
        }  

        template <class T>
        void SinglyCL<T>:: InsertLast(T no)
        {
            struct node<T> * newn = new node<T>;
            newn->data = no;
            newn->next = NULL;

            if((head == NULL) && (tail == NULL))    
            {
                head = newn;
                tail = newn;
            }
            else
            {
                tail->next = newn;
                tail = newn;
            }
            tail->next = head;
            iCount++;
        }
        template <class T>
        void SinglyCL<T>:: DeleteFirst()
        {
            if((head == NULL) && (tail == NULL))
            {
                return;
            }
            else if(head == tail)
            {
                delete head;
                head = NULL;
                tail = NULL;
            }
            else
            {
                struct node<T> * temp = head;
                head = head->next;
                delete temp;
                tail->next = head;
            }
            iCount--;
        }

template <class T>
        void SinglyCL<T>:: DeleteLast()
        {
            if((head == NULL) && (tail == NULL))
            {
                return;
            }
            else if(head == tail)
            {
                delete head;
                head = NULL;
                tail = NULL;
            }
            else
            {
                struct node<T> * temp = head;
                while(temp->next != tail)
                {
                    temp = temp->next;
                }
                delete tail;
                tail = temp;
                tail->next = head;
            }
            iCount--;
        }


        template <class T>
        void SinglyCL<T>:: Display()
        {
            
    if(head == NULL && tail == NULL)
    {
        cout << "Linked List is empty\n";
        return;
    }
    struct node<T> * temp = head;
    do
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    } while(temp != tail);

            cout << "NULL\n";
        }

        template <class T>
        int SinglyCL<T>::Count()
        {
            return iCount;
        }
        

        template <class T>
        void SinglyCL<T>:: InsertAtPos(T no, int ipos)
        {
            if(ipos < 1 || ipos > iCount + 1)
            {
                cout << "Invalid position\n";
                return;
            }

            if(ipos == 1)
            {
                InsertFirst(no);
            }
            else if(ipos == iCount + 1)
            {
                InsertLast(no);
            }
            else
            {
                struct node<T> * newn = new node<T>;
                newn->data = no;
                newn->next = NULL;

                struct node<T> * temp = head;
                for(int i = 1; i < ipos - 1; i++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                temp->next = newn;
                iCount++;
            }
        }
        
        template <class T>
        void SinglyCL<T>:: DeleteAtPos(int ipos)
        {
            if(ipos < 1 || ipos > iCount)
            {
                cout << "Invalid position\n";
                return;
            }

            if(ipos == 1)
            {
                DeleteFirst();
            }
            else if(ipos == iCount)
            {
                DeleteLast();
            }
            else
            {
                struct node<T> * temp = head;
                for(int i = 1; i < ipos - 1; i++)
                {
                    temp = temp->next;
                }

                struct node<T> * target = temp->next;
                temp->next = target->next;
                delete target;
                iCount--;
            }
        }

int main()
{
    SinglyCL <int>obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    
    obj.InsertAtPos(75,4);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of elements are : " << iRet << "\n";

    obj.DeleteAtPos(4);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of elements are : " << iRet << "\n";

    obj.DeleteFirst();
    obj.DeleteLast();
    
    obj.Display();
    iRet = obj.Count();
    cout << "Number of elements are : " << iRet << "\n";

    return 0;
}
