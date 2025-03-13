#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

        DoublyCL()
        {
            head = NULL;
            tail = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = new NODE;
            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if((head == NULL) && (tail == NULL))    
            {
                head = newn;
                tail = newn;
            }
            else
            {
                newn->next = head;
                head->prev = newn;
                head = newn;
            }
            tail->next = head;
            head->prev = tail;
            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn = new NODE;
            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if((head == NULL) && (tail == NULL))    
            {
                head = newn;
                tail = newn;
            }
            else
            {
                tail->next = newn;
                newn->prev = tail;
                tail = newn;
            }
            tail->next = head;
            head->prev = tail;
            iCount++;
        }

        void DeleteFirst()
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
                head = head->next;
                delete head->prev;
                head->prev = tail;
                tail->next = head;
            }
            iCount--;
        }

        void DeleteLast()
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
                tail = tail->prev;
                delete tail->next;
                tail->next = head;
                head->prev = tail;
            }
            iCount--;
        }

        void Display()
        {
            if(head == NULL && tail == NULL)
            {
                cout << "Linked List is empty\n";
                return;
            }
            PNODE temp = head;
            do
            {
                cout << "| " << temp->data << " | <=> ";
                temp = temp->next;
            } while(temp != head);

            cout << "(HEAD)\n";
        }

        int Count()
        {
            return iCount;
        }

        void InsertAtPos(int no, int ipos)
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
                PNODE newn = new NODE;
                newn->data = no;
                newn->next = NULL;
                newn->prev = NULL;

                PNODE temp = head;
                for(int i = 1; i < ipos - 1; i++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                temp->next->prev = newn;
                temp->next = newn;
                newn->prev = temp;
                iCount++;
            }
        }

        void DeleteAtPos(int ipos)
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
                PNODE temp = head;
                for(int i = 1; i < ipos - 1; i++)
                {
                    temp = temp->next;
                }

                PNODE target = temp->next;
                temp->next = target->next;
                target->next->prev = temp;
                delete target;
                iCount--;
            }
        }
};

int main()
{
    DoublyCL obj;
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
