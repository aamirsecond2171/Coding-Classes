#include<iostream>
using namespace std;

int a;
int b;
int r;
int fibonacci(int n)
{
   if (n==0)
   {
    return 0;
   }
   else if(n==1){
    return 1;
   }
   
   return (fibonacci(n-1) + fibonacci(n-2));
}
int main(){
    int num= 5;
    a=0;
    b=1;
    for(int i=0;i<num;i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    return 0;
}