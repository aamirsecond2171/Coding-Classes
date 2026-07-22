class Insurance {
    static void calculatePremium(int age, int baseamount){
        if(age>50)
            System.out.println(" Your Health Insurance Premium = "+(baseamount+1000));
        else
            System.out.println( " Your Health Insurance Premium = "+(baseamount+2000));
    }
    static void calculatePremium(int yearOfPurchase,int baseamount, int typeofvehicle){
        if (typeofvehicle < 2000) {
            if(typeofvehicle==2)
                System.out.println( " Your Vehicle Insurance Premium = "+(baseamount+500));
            else if(typeofvehicle==3)
                System.out.println( " Your Vehicle Insurance Premium = "+(baseamount+1000));
            else
                System.out.println( " Your Vehicle Insurance Premium = "+(baseamount+2000));
        }
        else
            if(typeofvehicle==2)
                System.out.println(" Your Vehicle Insurance Premium = "+(baseamount+1000));
            else if(typeofvehicle==3)
                System.out.println(" Your Vehicle Insurance Premium = "+(baseamount+1500));
            else
                System.out.println(" Your Vehicle Insurance Premium = "+(baseamount+3000));
    }
    static void calculatePremium(int day, int baseamount, String type){
        if(type=="International"){
            System.out.println(" Your Travel Insurance Premium = "+(day*100 + baseamount));
        }
        else
            System.out.println(" Your Travel Insurance Premium = "+(day*50 + baseamount));
    }
    void stud() {
      System.out.println("Roll = R24CA1CA0002");
      System.out.println("Name = Aamir Faisal");
   }
    public static void main(String[] args) {
        int baseamount=2000;
        Insurance I = new Insurance();
        calculatePremium(25,baseamount);
        calculatePremium(2001,baseamount,3);
        calculatePremium(7,baseamount,"International");
        System.out.println();
        I.stud();
    }
}
