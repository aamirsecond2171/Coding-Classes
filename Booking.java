import java.util.Scanner;
class seatNotAvailableException extends Exception{
    seatNotAvailableException(String msg){
        super(msg);
    }
}

public class Booking {
    static int availableSeats = 20;
    static void bookSeat(int seats) throws seatNotAvailableException{
        System.out.println("Requested seats "+ seats);
        System.out.println("Available seats "+ availableSeats);
        if(seats > availableSeats){
            throw new seatNotAvailableException("Seats not available!! Only"
            +availableSeats+" seats available.");}
        else{
            availableSeats -= seats;
            System.out.println(" Seat booked Successfully!!!");
        }
    }
    void stud(){
        System.out.println("Roll = R24CA1CA0002");
        System.out.println("Name = Aamir Faisal");
    }
    public static void main(String[] args) {
        Booking S =new Booking();
        try{
            bookSeat(25);
        }
        catch(seatNotAvailableException e){
            System.out.println("Exception: "+ e.getMessage());
        }
        S.stud();
    }
    

}