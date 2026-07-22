import java.util.Scanner;
class amstrong 
{
    public static void main(String[] args)
        {
               int count,r,m,x;
               Scanner S= new Scanner(S.in);
               System.out.println("Enter starting range");
               int i= S.nextInt();
               
               
               for( i=100;i<=10000;i++)
               {    //System.out.print(i+" the i, ");
                    count=0;
                    for(int a=i;a>0;a=a/10)
                    {
                        count=count+1;
                    }
                    //System.out.print(count+" is the count, ");
                    int amg=0;
                    for(int b=i;b>0;b=b/10)
                    {
                        r=b%10;
                        m=r;
                        //System.out.print(r+" is the r, ");
                        for(int c=count;c>1;c=c-1)
                        {
                            m=m*r;
                        }
                        //System.out.print(m+" is the m of r, ");
                        amg=amg+m;
                        //System.out.println(amg+" is the amg no. ");
                        
                    }
                    if (amg==i)
                    {
                        System.out.println(i+" is an armstrong number");
                    }
               }


            void r(){
                
            }

        }

        
        
        
}



