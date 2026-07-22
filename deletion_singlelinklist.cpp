// Case of deletion:-
//
         struct node *deletion(struct node *start, int data)
            {
                struct node *temp, *p;
                if (start==NULL)
                {
                    cout<<"Linked list is empty";
                    exit(1);
                }
                // Delete first node.
                if(start->info==data)
                {
                    temp=start;
                    start= start->link;
                    delete temp;
                    return start;
                }

                // Delete in between node.
                p=start;
                while(p->link!=data)
                {
                    if(p->link->info==data)
                    {
                        temp=p->link;
                        p->link=temp->link;
                        delete temp;
                        return start;
                    }
                    p=p->link;
                }
                // If data is not found
                cout<<"data is not found in list"<<data<<endl;
                return start;

            }
