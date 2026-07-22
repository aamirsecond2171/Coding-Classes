import java.util.Scanner;
class userProfile{
    static String username;
    static String email;
    static String bio;
    static long phone;
    userProfile(String username,String email){
        System.out.println("Username = Aamir123");
        System.out.println("Email address = faisal@gmail.com ");
        System.out.println();
    }
    userProfile(String username,String email, String bio, long phone){
        System.out.println("Username = Aadarsh332");
        System.out.println("Email address = rana@gmail.com");
        System.out.println("Biography = BCA student ");
        System.out.println("Phone number = 9936728193");
        System.out.println();
    }
    void stud(){
        System.out.println("Roll = R24CA1CA0002");
        System.out.println("Name = Aamir Faisal");
    }
    public static void main(String[] args) {
        userProfile U1 = new userProfile(username,email);
        userProfile U2 = new userProfile(username,email,bio,phone);
        U1.stud();
    }
}