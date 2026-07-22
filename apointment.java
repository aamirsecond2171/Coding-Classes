import java.util.Scanner;
class apointment{
    String patientName;
    String doctorName;
    String date;
    String time;
    void stud(){
        System.out.println("Roll = R24CA1CA0002");
        System.out.println("Name = Aamir Faisal");
    }
    void book(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Patient Name:...");
        patientName = sc.nextLine();
        System.out.println("Enter Doctor Name:...");
        doctorName = sc.nextLine();
        System.out.println("Enter Date:...");
        date = sc.nextLine();
        System.out.println("Enter Time:...");
        time = sc.nextLine();
        System.out.println("Appointment booked successfully!!!");
    }
    void details(){
        System.out.println("Patient Name = "+patientName);
        System.out.println("Doctor Name = "+doctorName);
        System.out.println("Date = "+date);
        System.out.println("Time = "+time);
    }
    public static void main(String[] args) {
        apointment A = new apointment();
        A.book();
        A.details();
        A.stud();
    }
}