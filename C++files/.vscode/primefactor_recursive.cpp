#include<iostream>
using namespace std;
void pfactor(int num)
{
    int i=2;
    if(num==1)
        return;
    while (num%i != 0)
    {
        i++;
    }
    cout<<i<<" ";
    pfactor(num/i);
}
int main(){
    pfactor(100);
}