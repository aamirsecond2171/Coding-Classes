class Product {
    String name;
    double price;
    double discount;
    Product(String name, double price) {
        this.name = name;
        this.price = price;
        this.discount = 0;
    }
    Product(String name, double price, double discount) {
        this.name = name;
        this.price = price;
        this.discount = discount;
    }
    double calculateFinalPrice() {
        return price - (price * discount / 100);
    }
    void display() {
        System.out.println("Product Name: " + name);
        System.out.println("Original Price: " + price);
        System.out.println("Discount: " + discount + "%");
        System.out.println("Final Price: " + calculateFinalPrice());
        System.out.println();
    }
}
public class Main {
    public static void main(String[] args) {
        Product p1 = new Product("Laptop", 50000);
        Product p2 = new Product("Mobile", 20000, 10);
        p1.display();
        p2.display();
        System.out.println();
        System.out.println("Roll: R24CA1CA0002 \n Name: Aamir Faisal");
    }
}
