import java.math.BigInteger;
import java.util.Scanner;
import java.math.BigInteger;
class factorils{
    static BigInteger fact(BigInteger n){
 
        if(n.compareTo(BigInteger.ONE)==0){
            return BigInteger.ONE;
        }
        else{
            return n.multiply(fact(n.subtract(BigInteger.ONE)));
        
        }
    }
    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);  
     String s1=sc.next();
        BigInteger b=new BigInteger(s1);
           BigInteger c=  fact(b);
           System.out.println(c);
    }
}