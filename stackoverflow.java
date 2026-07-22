class stackoverflow {
    static void show(int n) {
        if (n==0) {
            System.out.println("Over");
            return;
        }
        n-=1;
        System.out.println(n);
        show(n);
    }
    public static void main(String[] args) {
        show(10);
    }

}
