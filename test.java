

/*public class test {
    
    public static void main(String[] args) {
        // System.out.println("aamir java first program");
        // int a =10;
        // int b=20;
        // int sum = a+b;
        // System.out.print("sum =");
        // System.out.println(sum);
       
        // Scanner a = new Scanner(System.in);
        // System.out.println("the number you entered is:");
        // System.out.println(a+5);
        int a = 10;

    }
}*/
// class test1
// {
//     public static void main(String[] args) 
//     {
//         // int a = 10;
//         // System.out.println(a++ + ++a);
//         // System.out.println(a-- + a++);
//         // System.out.println(--a + a--);
//         // System.out.println(a-- + --a);

//         int CY=2025,CM=9,CD=3,BY=2007,BM=1,BD=5,NY,NM,ND;
//         if (CD>=BD) {
//             ND= CD-BD;
//         }
//         else{
//             CM=CM-1;
//             CD=CD+30;
//             ND=CD-BD;
//         }
//         if (CM>=BM) {
//             NM= CM-BM;
//         }
//         else{
//             CY=CY-1;
//             CM=CM+12;
//             NM= CM-BM;
//         }
//         NY=CY-BY;
//         System.out.println("AGE IS");
//         System.out.println(NY,NM,ND);
//         System.out.println(NM);
//         System.out.println(ND);
//     }
// }


            



// class test{
//     public static void main(String[] args)
//     {
//         // int v,count;
//         // int w;
//         // int x;
//         // int r;
//         // int z;

//         // int ams;
//         // int i;
//         // for(i=100;i<=1000;i++){
//         //     ams=0;                          //for saving amstrong number
//         //     v=i;                            //for counting digits
//         //     w=i;                            //for amstrong
//         //     x=0;                            //for getting the the powered number    and r is for saving the reminder
//         //    count=0;                         //for saving the count of digits and use it for powering numbers
//         //    while(v>0){
//         //         count=count+1;
//         //         v=v/10;
//         //    }
//         //    System.out.print(count);
//         //    System.out.print(" of ");
//         //    System.out.println(i);
//         //    z=count;                         //for updating the count in every loop
//         //    while(w>0){
//         //         x=w%10;
//         //         r=x;
//         //         while(count>0){
//         //             x=x*r;
//         //             count=count-1;
//         //         }
//         //         count=z;
//         //         ams=ams+x;
//         //         w=w/10;
//         //    }
//         //    if(i==ams){
//         //         System.out.println(+ams);
//         //    }

//         // }

//         // Static variable:-
//         //     static int a;

//         //     how to access :
//         //     1. direct access
//         //     2.using class name
//         //     3. using object name
        

        
        
//     }

// }



// class test
// {
//     // static int num1=100;
//     // static int num2=200;
//     // public static void main(String[] args)
//     // {
//     //     test s = new test();
//     //     System.out.println(num1+num2);
//     //     System.out.println(test.num1+test.num2);
//     //     System.out.println(s.num1+s.num2);


//     // }
//     // void add()
//     // {
//     //    test obj=new test();
//     //     System.out.println(obj.num1+obj.num2);
//     // }



//     void wish()
//     {
//         System.out.println("Good Morning");
//     }
//     void add(int num1, int num2)
//     {
//         int r;
//         r = num1 + num2;
//         System.out.println("The sum of numbers = "+r);
//     }
//     public static void main(String[] args)
//     {
//         // final int x =100;
//         // //x = 10;     Final variable's value cant be changed.
//         // System.out.println(x);


//         // Method in java:-
//         // 1. always declared outside the class
//         // 2. Called inside the class
//         // 3. is used to write the buisness logic of any application.

//         test T = new test();
//         T.wish();
//         T.add(150,200);

        
//     }
// }



// class Demo
// {
//     void info()
//     {
//         System.out.println("Hello World");
//     }
// }
// class test
// {
//     //Demo d = new Demo();
//     void R1(){
//         Demo d = new Demo();
//         d.info();
//     }
//     void R2(){
//         Demo d = new Demo();
//         d.info();
//     }
//     void R3(){
//         Demo d = new Demo();
//         d.info();
//     }
//     public static void main(String[] args)
//     {
//         test t = new test();
//         t.R1();
//         t.R2();
//         t.R3();
//     }
// }


// class Demo
// {
//     void info()
//     {
//         System.out.println("Hello World");
//     }
// }
// class test
// {
//     Demo d;
//     void R1(){
//         d = new Demo();
//         d.info();
//     }
//     void R2(){
//         //Demo d = new Demo();
//         d.info();
//     }
//     void R3(){
//         //Demo d = new Demo();
//         d.info();
//     }
//     public static void main(String[] args)
//     {
//         test t = new test();
//         t.R1();
//         t.R2();
//         t.R3();
//     }
//}




// class test
// {
//     int x = 10, y=20;
//     void add(int x, int y)
//     {
        
//     }
// }


// nesting method is not allowed in java
// method of same name is and same argument is not allowed






//import java.util.*;
// class test{
//     String name;
//     int att_classes;
//     int tot_classses;

//     public test(String name, int att_classes, int tot_classses){
//         this.name=name;
//         this.att_classes=att_classes;
//         this.tot_classses=tot_classses;
//     }

//     public void percentage(){
//         if(att_classes>0){
//             double percent= (att_classes*100)/tot_classses;
//             System.out.println("percentage of student "+name+" = "+percent);
//         }
//     }
//     public static void main(String[] args){
//         // int i;
//         // int countv=0,countc=0;
//         // System.out.print("Enter your name: ");
//         // Scanner S = new Scanner(System.in);
//         // String name= S.next();

//         // for(i=0; i<name.length();i++){
//         //    char c = name.charAt(i);
//         //    if(c=='a' || c=='A'){
//         //         countv+=1;
//         //    }
//         //    else if(c=='e' || c=='E'){
//         //         countv+=1;
//         //    }
//         //    else if(c=='i' || c=='I'){
//         //         countv+=1;
//         //    }
//         //    else if(c=='o' || c=='O'){
//         //         countv+=1;
//         //    }
//         //    else if(c=='u' || c=='U'){
//         //         countv+=1;
//         //    }
//         //    else{
//         //         countc+=1;
//         //    }
//         // }

//         // System.out.println("Number of vowels in your name= "+countv);
//         // System.out.println("Number of consonent in your name= "+countc);




//         // System.out.println("enter student name, attended class, total class");
//         // Scanner S = new Scanner(System.in);
//         // String name= S.next();
//         // int att_classes= S.nextInt();
//         // int tot_classses = S.nextInt();

//         test s1 =new test("Aamir",20,200);
//         s1.percentage();

//     }
//}




// class test{
//     public static void main(String[] args){
//         int n=5;
//         int i,j,k;
//         for(i=1;i<=5;i++){
//             for( j=1;j<=n-1;j++){
//                 System.out.print("_");
//             }
//             for(k=1;k<=2*i-1;k++){
//                 System.out.print(k);
//             }
//             System.out.println();
//             n--;
//         }
//     }
// }



// Static block:-
// it is used to write the logic of project and that logic are executed durint the .class file loading time.
//in java .class file is loaded only one time, hence static blocks are loaded only one per class.
//instance block depends on object creation, but static block creation depends on .class file
// syntax: 
//      Static{
                // s.o.pln("static")
                // }