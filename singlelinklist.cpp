#include<iostream>
using namespace std;

struct node {
    int info;
    struct node *link;
};

struct node *create_list(struct node *start, int data)
{
    struct node *temp = new node;
    temp->info = data;
    temp->link = NULL;
    start = temp;
    return start;
}

struct node *Addatbeg(struct node *start, int data)
{
    struct node *temp = new node;
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}

struct node *Addatend(struct node *start, int data)
{
    struct node *p = start;

    struct node *temp = new node;
    temp->info = data;
    temp->link = NULL;

    if (start == NULL)
        return temp;

    while (p->link != NULL)
        p = p->link;

    p->link = temp;

    return start;
}

struct node *insertafternode(struct node *start, int data, int item)
{
    struct node *p = start;

    while (p != NULL)
    {
        if (p->info == item)
        {
            node *temp = new node;
            temp->info = data;
            temp->link = p->link;
            p->link = temp;
            return start;
        }
        p = p->link;
    }

    cout << item << " not found in list\n";
    return start;
}

struct node *insertbeforenode(struct node *start, int data, int item)
{
    struct node *temp, *p;

    if (start == NULL)
    {
        cout << "List is empty\n";
        return start;
    }

    if (start->info == item)
    {
        temp = new node;
        temp->info = data;
        temp->link = start;
        start = temp;
        return start;
    }

    p = start;

    while (p->link != NULL)
    {
        if (p->link->info == item)
        {
            temp = new node;
            temp->info = data;
            temp->link = p->link;
            p->link = temp;
            return start;
        }
        p = p->link;
    }

    cout << item << " not found in list\n";
    return start;
}

struct node *insertatgivenpostion(struct node *start,int data,int pos)
{
    node *temp=new node;
    node *p;
    int i;

    temp->info=data;
    temp->link=NULL;

    if(pos==1)
    {
        temp->link=start;
        start=temp;
        return start;
    }

    p=start;

    for(i=1;i<pos-1 && p!=NULL;i++)
        p=p->link;

    if(p==NULL)
        cout<<"Invalid position\n";
    else
    {
        temp->link=p->link;
        p->link=temp;
    }

    return start;
}

struct node *create_no_node(struct node *start)
{
    int i,n,data;
    node *p,*tmp;
    cout<<"Enter no. of nodes..\n";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"Enter data at "<<i<<" node"<<endl;
        cin>>data;
        tmp=new node;
        tmp->info=data;
        tmp->link=NULL;

        if(start==NULL)
            start=tmp;
        else
        {
            p=start;
            while(p->link!=NULL)
                p=p->link;
            p->link=tmp;
        }
    }
    return start;
}

void gs(struct node *start)
{
    if(start==NULL)
    {
        cout<<"List is empty\n";
        return;
    }

    int smallest = start->info;
    int greatest = start->info;

    for(node *p=start; p!=NULL; p=p->link)
    {
        if(p->info > greatest)
            greatest = p->info;
        if(p->info < smallest)
            smallest = p->info;
    }

    cout<<"Greatest = "<<greatest<<" , Smallest = "<<smallest<<endl;
}

void selection_sorting(struct node *start)
{
    if(start==NULL)
    {
        cout<<"List is empty\n";
        return;
    }

    for(node *p=start;p->link!=NULL;p=p->link)
    {
        for(node *q=p->link;q!=NULL;q=q->link)
        {
            if(p->info > q->info)
                swap(p->info, q->info);
        }
    }

    cout<<"List sorted using Selection Sort.\n";
}

struct node *swapping(struct node *start)
{
    struct node *p;
    int temp;
    if(start==NULL)
    {
        cout<<"Linked list is empty\n";
        return start;
    }

       p = start;

    while(p->link!=NULL)
        {
          if(p->link==NULL)
          {
            temp=start->info; // last data hold
            start->info=p->info;// 1st data swap
            p->info=temp;//1st  data swap
          }
        p=p->link;
        }
}
struct node *delete1(struct node *start,int data)
{
    struct node *temp,*p;
    if(start==NULL)
    {
        cout<<"linked is empty\n";
        exit(1);
    }

    if(start->info==data)
    {
        temp=start;
        start=start->link;
        delete temp;
        return start;
    }
    p=start;
    while(p->link!=NULL)
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
    cout<<"Data is not found in list "<<data<<endl;

    return start;
}
void display(struct node *start)
{
    node *p = start;

    if (p == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    cout << "List: ";
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->link;
    }
    cout << endl;
}

int main()
{
    node *start = NULL;
    int data, choice, item,pos;

    while (1)
    {
        cout<<"1. Create first node\n";
        cout<<"2. Add at beginning\n";
        cout<<"3. Add at end\n";
        cout<<"4. Insert after node\n";
        cout<<"5. Insert before node\n";
        cout<<"6. Insert at given position\n";
        cout<<"7. Create number of nodes\n";
        cout<<"8. Smallest & Greatest\n";
        cout<<"9. Display\n";
        cout<<"10. Selection sort\n";
        cout<<"11. Swap first & last node data\n";
        cout<<"12. Delete any node in linked list\n";
        cout<<"13. Exit\n";

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter data: ";
                cin>>data;
                start=create_list(start, data);
                break;

            case 2:
                cout<<"Enter data: ";
                cin>>data;
                start=Addatbeg(start, data);
                break;

            case 3:
                cout<<"Enter data: ";
                cin>>data;
                start=Addatend(start, data);
                break;

            case 4:
                cout<<"Enter item: ";
                cin>>item;
                cout<<"Enter data: ";
                cin>>data;
                start=insertafternode(start, data, item);
                break;

            case 5:
                cout<<"Enter item: ";
                cin>>item;
                cout<<"Enter data: ";
                cin>>data;
                start=insertbeforenode(start, data, item);
                break;

            case 6:
                cout<<"Enter data: ";
                cin>>data;
                cout<<"Enter position: ";
                cin>>pos;
                start=insertatgivenpostion(start,data,pos);
                break;

            case 7:
                start=create_no_node(start);
                break;

            case 8:
                gs(start);
                break;

            case 9:
                display(start);
                break;

            case 10:
                selection_sorting(start);
                break;

            case 11:
                start=swapping(start);
                break;
            case 12:
                cout<<"which data you want to delete:"<<endl;
                cin>>data;
                start=delete1(start,data);
                break;
            case 13:
                exit(0);

            default:
                cout<<"Invalid choice\n";
        }
    }
    return 0;
}