// #include <iostream>
// using namespace std;

// int main()
// {
    // int a = 10;
    // cout<<a++ + ++a<<endl;
    //     cout<<"a="<<a<<endl;
    // cout<<a-- + a++<<endl;
    //     cout<<"a="<<a<<endl;
    // cout<<--a + a--<<endl;
    //     cout<<"a="<<a<<endl;
    // cout<<a-- + --a<<endl;
    // return 0;

    // BITWISE OPERATOR(perform in bit ->  0,1 )
    //
    // operator              NAME
    //   |                   OR
    //   &                   And
    //   ^                   XOR(exponential)
    //   <<                 left shift
    //   >>                 right shift
    //   ~                   NOT
    // int a=10,b=5;
    // cout<<(a|b)<<endl;
    // cout<<(a&b)<<endl;
    // cout<<(a^b)<<endl;

    // NESTED IF-ELSE
    // int a=10;
    // int b=20;
    // int c=30;
    // int a,b,c;
    // cin>>a;
    // cin>>b;
    // cin>>c;
    // if(a>b){
    //     if(a>c){
    //         cout<<a;
    //     }
    //     else{
    //         cout<<c;
    //     }
    // }
    // else{
    //     if(b>c){
    //         cout<<b;
    //     }
    //     else{
    //         cout<<c;
    //     }
    // }

    // int CY,CM,CD,DD,DM,DY;
    // cout<<"Enter current YEAR"<<endl;
    // cin>>CY;
    // cout<<"Enter current MONTH"<<endl;
    // cin>>CM;
    // cout<<"Enter current DATE"<<endl;
    // cin>>CD;
    // cout<<"Enter Birthday YEAR"<<endl;
    // cin>>DY;
    // cout<<"Enter Birthday MONTH"<<endl;
    // cin>>DM;
    // cout<<"Enter Birthday DATE"<<endl;
    // cin>>DD;

    // int ND,NM,NY;

    // if (CD>=DD)
    // {
    //    ND = CD-DD;
    // }
    // else
    // {
    //     if (CM%2==0)
    //     {
    //         if (CM<=6)
    //         {
    //             if (CM==2)
    //             {
    //                 CM=CM-1;
    //                 CD=CD+28;
    //                 ND=CD-DD;
    //             }
    //             else
    //             {
    //                 CM=CM-1;
    //                 CD=CD+30;
    //                 ND=CD-DD;
    //             }
    //         }
    //         else
    //         {
    //                 CM=CM-1;
    //                 CD=CD+31;
    //                 ND=CD-DD;
    //         }

    //     }
    //     else
    //     {
    //         if(CM>6)
    //         {
    //             if (CM==7)
    //             {
    //                 CM=CM-1;
    //                 CD=CD+31;
    //                 ND=CD-DD;
    //             }
    //             else
    //             {
    //                 CM=CM-1;
    //                 CD=CD+30;
    //                 ND=CD-DD;
    //             }

    //         }
    //         else
    //         {
    //             CM=CM-1;
    //             CD=CD+31;
    //             ND=CD-DD;
    //         }

    //     }

    // }

    // if (CM>=DM)
    // {
    //     NM= CM-DM;
    // }
    // else
    // {
    //     CY= CY-1;
    //     CM= CM+12;
    //     NM= CM-DM;
    // }
    // if (CY>=DY)
    // {
    //     NY= CY-DY;
    //     cout<< " YOUR AGE IS "<<NY<<" YEARS "<<NM<<" MONTHS AND "<<ND<<" DAYS ";

    // }
    // else
    // {
    //     cout<<"KYA HAM APKO PAGAL DIKHTE HAI -_-";

    // }

    // int an,ad,bn,bd;
    // char op;

    // cout<<"Enter NUMERATOR of first rational no."<<endl;
    // cin>>an;
    // cout<<"Enter DENOMENATOR of first rational no."<<endl;
    // cin>>ad;
    // cout<<"Enter NUMERATOR of second rational no."<<endl;
    // cin>>bn;
    // cout<<"Enter DENOMENATOR of second rational no."<<endl;
    // cin>>bd;
    // cout<<"Enter any operator"<<endl;
    // cin>>op;
    // int nn,nd,Q,R;

    // if (ad==0 || bd==0)
    // {
    //     cout<<"CHALA JA"<<endl;
    // }
    // else{

    //     if (op=='+')
    //     {
    //         int nd,nn,Q,R;

    //         nd= ad * bd;
    //         nn= an*bd + bn*ad;

    //         Q= nn/nd;
    //         R= nn%nd;
    //         cout<<"The sum of these rational no.s is "<<Q<<" whole "<<R<<"/"<<nd<<endl;

    //     }
    //     else{
    //         if (op=='-')
    //         {
    //             int nd,nn,Q,R;

    //             nd= ad * bd;
    //             nn= an*bd - bn*ad;

    //             Q= nn/nd;
    //             R= nn%nd;
    //             cout<<"The difference of these rational no.s is "<<Q<<" whole "<<R<<"/"<<nd<<endl;
    //         }
    //         else{
    //             if (op=='*')
    //             {
    //                 nn= an*bn;
    //                 nd= ad*bd;

    //                 Q= nn/nd;
    //                 R= nn%nd;
    //                 cout<<"The multiplication of these rational no.s is "<<Q<<" whole "<<R<<"/"<<nd<<endl;

    //             }
    //             else
    //             {
    //                 if (op=='/')
    //                 {
    //                     nn= an*bd;
    //                     nd= ad*bn;

    //                     Q= nn/nd;
    //                     R= nn%nd;
    //                     cout<<"The division of these rational no.s is "<<Q<<" whole "<<R<<"/"<<nd<<endl;
    //                 }
    //                 else{
    //                     cout<<"Sorry! something went wrong, Please recheck your input.";
    //                 }

    //             }

    //         }

    //     }

    // }
    // cout<<"Thanks";

    // int a, b, c;
    // cout << "enter any integer no" << endl;
    // cin >> a;
    // cout << "enter another integer" << endl;
    // cin >> b;
    // while(1){

    //     cout << "enter + for addition" << endl
    //         << "enter - for subtraction" << endl
    //         << "enter * for multiplication" << endl
    //         << "enter % for division" << endl
    //         << "enter / for division" << endl;
    //     cin>>c;
    //     switch (c)
    //     {
    //     case '+':
    //         cout<<"The sum of the no.s is "<<a+b;
    //         break;
    //     case '-':
    //         cout<<"The difference of the no.s is "<<a-b;
    //         break;
    //     case '*':
    //         cout<<"The multiplication of the no.s is "<<a*b;
    //         break;
    //     case '%':
    //         cout<<"The modulus of the no.s is "<<a%b;
    //         break;
    //     case '/':
    //         cout<<"The division of the no.s is "<<a/b;
    //         break;
    //     default:
    //         cout<<"please enter valid option";
    //     }
    // }

    // Iterative statement/loop
    // 1. while loop
    // 2. do-while loop
    // 3. for loop

    // 1.--  while statement:-
    // syntax:-
    // while(condition)
    // {
    //      statements
    // }

    // steps followed by loop statement:-
    // 1. initialisation
    // 2. condition
    // 3. updation

    // int a=1;

    // while (a<=5)
    // {
    //     cout<<a<<endl;
    //     a++;
    // }

    // int b=5;
    // while (b<=25)
    // {
    //     cout<<b<<endl;
    //     b=b+5;

    // }

    // int c=100;
    // while (c>=60)
    // {
    //      cout<<c<<endl;
    //     c=c-10;

    // }

    // 2. Do- while loop
    // syntax:-
    // do{
    // statements
    // }while(condition);

    // int a =1;
    //  do {
    //     cout<<a<<endl;
    //     a++;
    //  }while (a<=5);

    // TABLE
    // int n,m;
    // int l=1;
    // cout<<"Enter a no"<<endl;
    // cin>>n;
    // cout<<"Enter the no. till where you want to see the table"<<endl;
    // cin>>m;

    // while (l<=m)
    // {
    //     cout<<l<<" * "<<n<<" = "<<l*n<<endl;
    //     l++;

    // }

    // COUNT OF NUMBER
    // int x,y;
    // y=0;
    // cout<<"enter any integer"<<endl;
    // cin>>x;
    // while (x>0)
    // {
    //     x=x/10;
    //     y++;
    // }
    // cout<<y;

    // Perfect no.
    //  int a,i;
    //  int sum=0;
    //  cout<<"Enter any no."<<endl;
    //  cin>>a;
    //  for(i=1; i<=a/2; i++){
    //      if(a%i==0){
    //          sum+=i;
    //      }
    //  }
    //  if(sum==a){
    //      cout<<"This is a perfect number";

    // }
    // else{
    //     cout<<"This is not a perfect number";
    // }

    // REVERSE OF NUMBER
    // int rev;
    // int a;
    // int r;
    // cout<<"enter a number"<<endl;
    // cin>>a;

    // for(rev=0;a>0;a=a/10){
    //     r=a%10;
    //     rev=rev*10+r;
    // }
    // cout<<"reverse no is "<<rev;

    // PALIDROME
    // int rev;
    // int a;
    // int r;
    // int p;
    // cout<<"enter a number"<<endl;
    // cin>>a;
    // p=a;

    // for(rev=0;a>0;a=a/10){
    //     r=a%10;
    //     rev=rev*10+r;
    // }
    // if(p==rev){
    //     cout<<"This is a Palindrome";
    // }

    // FACTORIAL
    // int a,b;
    // int fac=1;
    // cout<<"Enter a number"<<endl;
    // cin>>a;
    // for(b=1;b<=a;b++){
    //     fac=fac*b;
    // }
    // cout<<"The factorial of the number is  "<<fac<<endl;

    // SUM OF NUMBERS
    //    int a,r,c;

    //    cout<<"Enter a number"<<endl;
    //    cin>>a;
    //    for(c=0;a>0;c=c+r){
    //         r=a%10;
    //         a=a/10;
    //    }
    //    cout<<"the sum of digits is   "<<c;

    //    return 0;

    // int i,j,k;
    // j=5;
    // for(i=1;i<=5;i++){
    //     k=j-i;
    //     for(;j>k;j--){
    //         cout<<j;

    //     }
    //     j=5;
    //     cout<<endl;
    // }

    // int i,j;

    // for(i=5;i>=1;i--){

    //     for(j=5;j>=i;j--){
    //         cout<<i;

    //     }

    //     cout<<endl;
    // }

    // int i,j,k;

    // for(i=1;i<=5;i++){
    //     for(j=5;j>i;j--){
    //         cout<<" ";
    //     }

    //     for(k=1;k<=i;k++){
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }

    // }

    // void sod();                      // No return type and no passing argument
    // int main(){
    //     sod();
    //     return 0;
    // }
    // void sod(){
    //     int a,r;
    //     int sum=0;
    //     cout<<"Enter any no."<<endl;
    //     cin>>a;
    //     for(int i=0;a>i;a=a/10){
    //         r=a%10;
    //         sum=sum+r;
    //     }
    //     cout<<"The sum of digits is "<<sum;
    // }

    // int sod();                       //with return type but no passing argument
    // int main(){
    //     int s;
    //     s=sod();
    //     cout<<"the sum of digits is "<<s;
    //     return 0;
    // }
    // int sod(){
    //     int a,r;
    //     int sum=0;
    //     cout<<"Enter any no."<<endl;
    //     cin>>a;
    //     for(int i=0;a>i;a=a/10){
    //         r=a%10;
    //         sum=sum+r;
    //     }

    //     return sum;
    // }

    // void sod(int a);                 //with passing argument but no return type
    // int main(){
    //     int x;
    //     cout<<"Enter any no."<<endl;
    //     cin>>x;
    //     sod(x);
    //     return 0;
    // }
    // void sod(int a){
    //     int r;
    //     int sum=0;

    //     for(int i=0;a>i;a=a/10){
    //         r=a%10;
    //         sum=sum+r;
    //     }
    //     cout<<"The sum of digits is "<<sum;
    // }

    // int sod(int a);              // with both return type and passing argument
    // int main(){
    //     int x,s;
    //     cout<<"Enter any no."<<endl;
    //     cin>>x;
    //     s= sod(x);
    //     cout<<"The sum of digits is "<<s;
    //     return 0;
    // }
    // int sod(int a){
    //     int r;
    //     int sum=0;

    //     for(int i=0;a>i;a=a/10){
    //         r=a%10;
    //         sum=sum+r;
    //     }

    //     return sum;
    // }

    // array
    // it is a collection of similar data type.
    // base address starts from 0.

    // Type of array
    // 1. one dimentional array
    //       Syntax:-
    //           data type    array name[size]
    //          eg.  int arr[5].
    //               float arr[4].
    //       Initialization:-
    //           1.  int arr[5]={1,2,3,4,5};
    //           2.  int arr[]={1,2,3,4,5,6};
    //           3.  int arr[5]={1,2,3};    ------ 1 2 3 0 0
    //           4.  int arr[3]={1,2,3,4,5} ------ 1 2 3
    // 2. multiple dimentional array.
    //       Syntax:-
    //

    // int abc[5];
    // int i;
    // int sum=0;
    // for(i=0;i<=4;i++)
    //     {
    //         cin>>abc[i];
    //         sum=sum+abc[i];
    //     }
    //     cout<<"The sum of elements is "<<sum;

    // int abc[5];
    // int i;
    // for (i = 0; i <= 4; i++)
    // {
    //     cin >> abc[i];
    // }
    
    // if (abc[0] > abc[1])
    // {
    //     if (abc[0] > abc[2])
    //     {
    //         if (abc[0] > abc[3])
    //         {
    //             cout << abc[0];
    //         }
    //         else
    //         {
    //             cout << abc[3];
    //         }
    //     }
    //     else if (abc[2] > abc[3])
    //     {
    //         cout << abc[2];
    //     }
    //     else
    //     {
    //         cout << abc[3];
    //     }
    // }
    // else if (abc[1] > abc[2])
    // {
    //     if (abc[1] > abc[3])
    //     {
    //         cout << abc[1];
    //     }
    //     else
    //     {
    //         cout << abc[3];
    //     }
    // }
    // cout << " is the greatest elements ";
    // cout << endl;

    // if (abc[0] < abc[1])
    // {
    //     if (abc[0] < abc[2])
    //     {
    //         if (abc[0] < abc[3])
    //         {
    //             cout << abc[0];
    //         }
    //         else
    //         {
    //             cout << abc[3];
    //         }
    //     }
    //     else if (abc[2] < abc[3])
    //     {
    //         cout << abc[2];
    //     }
    //     else
    //     {
    //         cout << abc[3];
    //     }
    // }
    // else if (abc[1] < abc[2])
    // {
    //     if (abc[1] < abc[3])
    //     {
    //         cout << abc[1];
    //     }
    //     else
    //     {
    //         cout << abc[3];
    //     }
    // }

    // cout << " is the smallest elements ";

    // Two dimentional array
    //  Declaration:-
    //      Syntax:
    //          data_type array_name[row][col];

    //         eg:-  int x[2][3];
    // Initialisation:-
    //     Syntax:
    //         data_type array_name[row][col];

    //         eg:-  int x[2][3] = {{2,3,4},{10,20,30}};           2  3  4
    //                                                             10 20 30

    //               int z[][3]={
    //                             {1,2,3},
    //                             {20,35,45},
    //                             {2,4,5}
    //                             {3,7,26}
    //                          }
    //             !!size for column is mandatory but size for row can be optional

    // how to take input in 2D array

    // int x[2][3];
    // int i,j;
    // for(i=0;i<2;i++){
    //     for(j=0;j<3;j++){
    //         cin>>x[i][j];
    //     }
    // }
    // for(i=0;i<2;i++){
    //     for(j=0;j<3;j++){
    //         cout<<x[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }




    //QUESTION 1.
    // int arr[3][3];
    // int i,j;
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         if(arr[i][j]%2==0)
    //         {
    //             cout<<arr[i][j]<<" is an even number";
    //         }
    //         else
    //         {
    //             cout<<arr[i][j]<<" is an odd number";
    //         }
    //         cout<<endl;
    //     }
    // }


    // QUESTION 2.
    // int arr[3][3];
    // int i,j;
    // int odd=0,even=0;
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         if(arr[i][j]%2==0)
    //         {
    //             // cout<<arr[i][j]<<" is an even number";
    //             even=even+arr[i][j];

    //         }
    //         else
    //         {
    //             // cout<<arr[i][j]<<" is an odd number";
    //             odd=odd+arr[i][j];
    //         }
            
    //     }
    // }
    // cout<<"The sum of even elements is "<<even<<endl;
    // cout<<"The sum of odd elements is "<<odd;
    


    //QUESTION 3.
    // int arr[3][3];
    // int i,j;
    // int R[3]={0,0,0};
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         R[i]=R[i]+arr[i][j];
    //     }
    //     cout<<R[i]<<" is the sum of R"<<i<< endl;
    // }

    
    


    //QUESTION 4.
    // int arr[3][3];
    // int i,j;
    // int C[3]={0,0,0};
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         C[i]= C[i] + arr[j][i];
    //     }
    //     cout<<C[i]<<" is the sum of C"<<i<< endl;
    // }


    //QUESTION 5.
    // int arr[3][3];
    // int i,j;
    // int D1=0,D2=0;
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         // R[i]=R[i]+arr[i][j];
    //         if(i==j){
    //             D1+=arr[i][j];
    //         }
    //         if(i+j==2){
    //             D2+=arr[i][j];
    //         }
    //     }
        
    // }
    // cout<<D1<<" is the sum of Diagonal 1"<< endl;
    // cout<<D2<<" is the sum of Diagonal 2"<<endl;



    //QUESTION 6.
    // int arr[2][3];
    // int i,j;
    // int copy[3];
    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    // copy[0]=arr[0][0];
    // copy[1]=arr[0][1];
    // copy[2]=arr[0][2];
    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         if(i==0){
    //             arr[i][j]= arr[i+1][j];
    //         }
    //         if(i==1){
    //             arr[i][j]=copy[j];
    //         }

    //     }
        
    // }
    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }





    // Pointer: a variable that stores address of another variable.

    // syntax:-
    //     data_type *variable_name;
    //     eg-  int a=10;
    //         int *P;
    //         P= &a;        // stores the address of the variable 'a'
    //      assigning address to pointer variable:
    //          int a=20;
    //          int *ptr;
    //          ptr = &a;


    // int a =20;
    // int *p;
    // p= &a;
    // cout<<" the value of a = "<<a<<endl;
    // cout<<" the address of &a = "<<&a<<endl;
    // cout<<" the value of p = "<<p<<endl;
    // cout<<" the value of *p = "<<*p<<endl;

    //  & = Address of operator            // ptr = &a; --->  address
    //  * = Dereference operator           // *ptr = &a; --->  value of a



    // create Dianamic memory in C    
    //  1. malloc()
    //  2. realloc()
    //  3. calloc()
    //  4. free()  ---> realease the memory;


    // Dianamic memory:  it means memory that is created/allocated during the run time of the program.
    //                   It is not fixed at the compile time.

    // 1. new to allocate the memory    //in c++
    // 2. delete to free the memory     //in c++


    //Self Referencial Structure:-
    //      a structure that contain pointer to structure of its own type is known as self referential structure.

    // syntax:-
    // struct tag
    // {
    //     data member;
    //     data member;
    //     .
    //     .
    //     .
    //     .
    //     struct tag *ptr;
    // }

    //eg:-
    //  struct node
    //  {
    //     int info;
    //     struct node *next;    //or we can also write only name of structure "node"  // right statement
    //  }
    //  _________________________________

    //  struct node
    //  {
    //     int info;
    //     int *ptr;           // wrong statement
    //  }



    // note!!!
    //     a self referencial structure must contain a pointer to itself.
    //     it is mainly used in dynamic data structure such as link-list, tree-gra
    
    


    


//}
#include<iostream>
#include<string>
using namespace std;
struct student
{
    string name;
    int rollno;
    float marks;
};
int main()
{   
    struct student s1;
    cout<<"Enter name,rollno and marks.."<<endl;
    cin>>s1.name>>s1.rollno>>s1.marks;
    cout<<"student name = "<<s1.name<<endl;
    cout<<"student rollno = "<<s1.rollno<<endl;
    cout<<"student marks = "<<s1.marks<<endl;
    return 0;
}
