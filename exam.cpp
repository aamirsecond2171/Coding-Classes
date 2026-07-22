#include <iostream>
using namespace std;
// int admn;
//     int mobileno;
//     int rollno;
//     string name;
// class inpot {
//     public:
    
//     void data(){
//     cout<<"Enter admition number"<<endl;
//     cin>>admn;
//     cout<<"Enter mobile number"<<endl;
//     cin>>mobileno;
//     cout<<"Entre Roll no"<<endl;
//     cin>>rollno;
//     cout<<"Enter your name"<<endl;
//     cin>>name>>endl;}
// };
// class data: public inpot{
//     public:
//     void display(){
//         cout<<name<<endl<<admn<<endl<<rollno<<endl<<mobileno;
//     }

// };

// int main(){
//     data t;
//     t.data();
//     t.display();
//     return 0;
    //g.data;
   //  m.display;

// a parent class having more than one child is called hierarchical inheritance
// Parent - A 
// Child - B C D 
// syntax:
//     class A{
//         -------
//     }:
//     class B: public A{
//         --------
//     };
//     class C: public A{
//         --------
//     };
//     class D: public A{
//         ---------
//     };
// Hybrid inheritance:
//         it is the combinations of different types of inheritance.

int main()
{
    
    // 1. white a program multiply two positive numbers without using * operator.
    // 2. w a p to find out the grade of a student when the marks of five subjects are given.
    // int a,b,i;
    // int m=0;
    // cout<<"Enter any two number"<<endl;
    // cin>>a>>b;
    // for(i=1;i<=b;i++){
    //     m=m+a;
    // }
    // cout<<"The pruduct is  "<<m;

    
    int tmarks;
    float avg;
    int E,M,H,B,P;
    cout<<"Enter marks of English"<<endl;
    cin>>E;
    cout<<"Enter marks of Maths"<<endl;
    cin>>M;
    cout<<"Enter marks of Hindi"<<endl;
    cin>>H;
    cout<<"Enter marks of Bio"<<endl;
    cin>>B;
    cout<<"Enter marks of Physics"<<endl;
    cin>>P;
    tmarks=E+M+H+B+P;
    avg=tmarks/5;
    if(avg>=90 && avg<=100){
        cout<<"your grade is A";
    }
    else if(avg>=80 && avg<90){
        cout<<"your grade is B";
    }
    else if(avg>=70 && avg<80){
        cout<<"your grade is C";
    }
    else if(avg>=60 && avg<70){
        cout<<"your grade is C";
    }
     else if(avg>=50 && avg<60){
        cout<<"your grade is C";
    }
    else{
        cout<<" you are fail";
    }



}