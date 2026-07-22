#include<iostream>
using namespace std;
// struct node{
//     int info;
//     struct node *link;
// };
// struct node *create_list(struct node *start, int data)
// {
//     struct node*tmp=new node;
//     tmp->info=data;
//     tmp->link=NULL;
//     start=tmp;
//     return start;
// }
// struct node *Addatabeg(struct node *start, int data)
// {
//     struct node*tmp=new node;
//     tmp->info=data;
//     tmp->link=NULL;
//     start=tmp;
//     return start;
// }
// struct node *Addatend(struct node *start, int data)
// {
//     struct node *p=start;
//     struct node *tmp=new node;
//     tmp->info=data;
//     tmp->link=NULL;

//     if(start==NULL)
//     {
//         return tmp;
//     }
//     while(p->link!=NULL)
//     {
//         p=p->link;

//         p->link=tmp;
//     }

//     return start;
// }
// void display(struct node *start)
// {
//     struct node *p=start;
//     if(p==NULL)
//     {
//         cout<<"list is empty\n";
//         return;
//     }
//     cout<<"list is...";
//     while(p!=NULL)
//     {
//         cout<<p->info<<" ";
//         p=p->link;
//     }
//     cout<<endl;
// }


// int main()
// {
//     struct node *start=NULL;
//     int n, data;
    
//     cout<<"enter the number of nodes\n";
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         cout<<"Enter the data of "<<i<<"nodes"<<" "<<endl;
//         cin>>data;
//         start=Addatend(start, data);
//     }

//     display(start);

//     return 0;
// }

