
        void push(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;    
            newn->data = no;
            newn->next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                newn->next = head;
                head = newn;
            }
            iCount++;
        }

        void pop()
        {
            PNODE temp = NULL;

            if(head == NULL)
            {
                return;
            }
            else if(head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;

                head = head -> next;
                delete temp;
                
            }
            iCount--;
        }
        
        void Display()
        {
            PNODE temp = head;

            cout<<"Elements of LinkedList are : \n";

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" | -> ";
                temp = temp -> next;
            }

            cout<<"NULL\n";
        }