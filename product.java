
class product
{
    int id;
    String name;
    double price;
    product(int id,String name,double price)
    {
        this.id=id;
        this.name=name;
        this.price=price;
    }
    void showdetails()
    {
        System.out.println("Product id = "+id);
        System.out.println("Product name = "+name);
        System.out.println("Product price = "+price);
    }
    public static void main(String []args)
    {
        product P = new product(101,"mobile", 75000.04);
        P.showdetails();
    }
}
