#include<iostream>
using namespace std;
void display2(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";
    display2(n-1);
}
void display1(int n)
{
    if(n==0)
        return;
    display1(n-1);
    cout<<n<<" ";
}

void pyramid(int n)
{
    if(n==0)
        return;
    pyramid(n-1);
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
void revpyramid(int x)
{
    if(x==0)
        return;
    for(int i=1;i<=x;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    revpyramid(x-1);
}
int main()
{
    //int n = 4;
    int x = 5;
    //pyramid(n);
    revpyramid(x);
}