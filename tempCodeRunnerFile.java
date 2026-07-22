abstract class Order {
    abstract void track(); 
}
class DomesticOrder extends Order {
    @Override
    void track() {
        System.out.println("Domestic Order Status: Out for delivery");
    }
}
class InternationalOrder extends Order {
    @Override
    void track() {
        System.out.println("International Order Status: Cleared customs and in transit");
    }
}
public class Main {
    public static void main(String[] args) {

        Order o1 = new DomesticOrder();
        Order o2 = new InternationalOrder();

        o1.track();
        o2.track();
        System.out.println();
        System.out.println(" Roll = R24CA1CA0002 \n Name = Aamir Faisal");
    }
}
