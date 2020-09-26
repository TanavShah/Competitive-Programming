import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
	Scanner in = new Scanner(System.in);
	int t = in.nextInt();
	for(int aa = 0 ; aa < t ; aa++)
	{
	    BigInteger a = in.nextBigInteger();
	    BigInteger b = in.nextBigInteger();
	    BigInteger c = in.nextBigInteger();
	    BigInteger ans = a.multiply(a);
	    BigInteger x = b.multiply(BigInteger.valueOf(2));
	    ans = ans.subtract(x);
	    System.out.println(ans);
	}
    }
}

