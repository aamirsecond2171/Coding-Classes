import java.util.Scanner;
class smartcard 
{   private static double balance=0;
    public static void loadmoney(double amount){
        if(amount>0){
            balance+=amount;
            System.out.println("rupees "+ amount+ " loaded successfully!!");
        }
        else{
            System.out.println("Invalid amount");
        }}
    public static void payfare(double amount){
        if(amount<=balance){
            balance-=amount;
            System.out.println("rupees "+ amount+ " withdraw successfully!!");
        }
        else{
            System.out.println(" Insufficient balance");
        }}
    public static void checkBalance(){
        System.out.println("Available balance = "+ balance);
    }
    void stud(){
        System.out.println("Roll = R24CA1CA0002");
        System.out.println("Name = Aamir Faisal");
    }
    public static void main(String[] args) 
    {
        int Choice;
        double amount;
        smartcard S = new smartcard();
        Scanner sc = new Scanner(System.in);
        while (true)
        {   System.out.println("Enter your choice ");
            System.out.println("1. Money deposit");
            System.out.println("2. Money withdrawal");
            System.out.println("3. Check balance");
            System.out.println("4. Exit");
            Choice = sc.nextInt();
            switch (Choice) 
            {   case 1:
                    System.out.println("Enter amount to be deposited");
                    amount=sc.nextDouble();
                    loadmoney(amount);
                    break;
                case 2:
                    System.out.println("Enter amount to withdraw");
                    amount=sc.nextDouble();
                    payfare(amount);
                    break;
                case 3:
                    checkBalance();
                    break;
                case 4:
                    break;
                default:
                    break;
            }
        }
    }
}