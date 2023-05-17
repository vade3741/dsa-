//big integer class in java
//it has powerful lot of inbuilt function
/* 
* modular arithmetic
gcd calculation
base converison
power calculation
bitwise operators
prime generation
and more... 





*/
import java.math.BigInteger;
import java.util.Scanner;
public class bigfact{
    static void playwithBigInt(){
        Scanner sc=new Scanner(System.in);
        String s1=sc.next();
BigInteger b1 =new BigInteger(s1);
BigInteger b2 =new BigInteger("122222222222222222222225");
// b1=b1.add(b2);
b1=b1.multiply(b2);

System.out.println(b1);
//bitcount counts the number of set bits 
System.out.println(b1.bitCount());
//bit length counts the total number of bits 
System.out.println(b1.bitLength());


//conversion of a integer into a big integer

int a=sc.nextInt();
int b=sc.nextInt();
BigInteger b3 =(BigInteger.valueOf(a));
BigInteger b4 =(BigInteger.valueOf(b));
System.out.println(b3.gcd(b4))  ;

//base conversion
//interpret the number in the given base
 BigInteger b5=new BigInteger("1001",2 );
 System.out.println(b5);
 //power of a number
 System.out.println(b3.pow(20));
}
    public static void main(String[] args) {
        playwithBigInt();
    }
}