import java.util.Scanner;

interface paymentMode {
    void pay(double amount);
}
class upiPayment implements paymentMode{
    public void pay(double amount){
        System.out.println(" Transaction of amount "+amount+" done successfully by UPI Id Aamir@ybl !!!  ");
    }
    
}
class cardPayment implements paymentMode{
    public void pay(double amount){
        System.out.println(" Transaction of amount "+amount+" done successfully by Card XXXXXXXX2142 !!!  ");
    }
   
}

public class paymentApp{

    void stud(){
        System.out.println("Roll = R24CA1CA0002");
        System.out.println("Name = Aamir Faisal");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("choose payment mode:");
        System.out.println("1 for UPI");
        System.out.println("2 for CARD");
        int choice = sc.nextInt();
        System.out.println("Enter amount : ");
        double amount = sc.nextDouble();
        paymentMode payment = null;
        paymentApp A = new paymentApp();
        if(choice == 1){
            payment = new upiPayment();
            
        }
        else if(choice == 2){
            payment = new cardPayment();
            
        }
        else{
            System.out.println("!! Invalid Choice !!");
            
        }
        payment.pay(amount);
        A.stud();
    }
}

