import java.math.BigInteger;
import java.util.Scanner;
public class julka {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
      
        for(int i=0;i<10;i++){
            BigInteger a;
            BigInteger b;
         
        a=sc.nextBigInteger();
        b=sc.nextBigInteger();
      
       BigInteger b4 = BigInteger.TWO;
       BigInteger b3 =(a.subtract(b)).divide(b4);
       System.out.println(a.subtract(b3));
System.out.println(b3);
    }
    }
}
