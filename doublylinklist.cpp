// syntax of doubly link list
struct node
{
    struct node *prev;
    int info;
    struct node *next;
};


// to create doubly link list
struct node *createnode(struct node *start, int data)
{
    struct node *temp= new node ;
    temp->info=data;
    temp->prev=NULL;
    temp->next=NULL;
    start=temp;
    return start;
}


// to add data in doubly link list at begining
struct node *adddata(struct node *start, int data)
{
    if (start==NULL)
    {
        cout<<"list is empty...\n";
        exit(1);
    }
    node *temp= new node;
    temp->info=data;
    temp->next=start;
    start->prev=temp;
    temp->prev=NULL;
    start = temp;
    return start;
}