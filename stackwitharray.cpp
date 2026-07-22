#include<iostream>
#define max 10
using namespace std;
int stack_arr[max];
int top = -1;
void push(int item);
int pop();
int Isfull();
int Isempty();
void display();
int greatest();
int smallest();
int main(){
    int choice, item;
    while(1)
    {
        cout<<"1. Push...\n";
        cout<<"2. Pop...\n";
        cout<<"3. Display...\n";
        cout<<"4. count of members...\n";
        cout<<"5. top element...\n";
        cout<<"6. Greatest element...\n";
        cout<<"7. Smallest element...\n";
        cout<<"8. Exit...\n";
        cout<<"Enter yout choice...\n";
        cin>>choice;
        switch(choice){

            case 1:
                cout<<"enter data to be inserted in the stack...\n";
                cin>>item;
                push(item);
                break;
            case 2:
                item= pop();
                cout<<"deleted item = "<<item<<endl;
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"Count of data = "<<top+1<<endl;
                break;
            case 5:
                cout<<"top element = "<<stack_arr[top]<<endl;
                break;
            case 6:
                cout<<"gratest =  "<<greatest()<<endl;
                break;
            case 7:
                cout<<"Smallest =  "<<smallest()<<endl;
                break;
            case 8: 
                exit(1);
            default:
                    cout<<"You entered wrong choice...\n";


            
        }
        
    }
}
int smallest()
{
    int sml,i;
        sml=stack_arr[0];
        for(i=0;i<=top;i++)
        {
            if(stack_arr[i]<sml)
            {
                sml=stack_arr[i];
            }
        }   
    return sml;
}
int greatest()
{   
    int grt,i;
        grt=stack_arr[0];
        for(i=0;i<=top;i++)
        {
            if(stack_arr[i]>grt)
            {
                grt=stack_arr[i];
            }
        }   
    return grt;
}
void push(int data)
{
    if(Isfull())
    {
        cout<<"stack overflow...\n";
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}
int Isfull()
{
    if(top==max-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int pop()
{
    int item;
    if (Isempty())
    {
        cout<<"Stack underflow...\n";
        exit(1);
    }
    item=stack_arr[top];
    top=top-1;
    return item;
}

int Isempty(){
    if(top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void display(){
    int i;
    if(Isempty()){
        cout<<"stack is empty..\n";
        return;
    }
    cout<<"stack elements are...\n";
    for(i=top; i>=0;i--)
    {
        cout<<stack_arr[i]<<" ";
    }
    cout<<endl;
}