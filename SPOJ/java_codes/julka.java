import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
	Scanner in = new Scanner(System.in);
	for(int aa = 0 ; aa < 10 ; aa++)
	{
	    String total,more;
	    total = in.nextLine();
	    more = in.nextLine();
	    BigInteger t = new BigInteger(total);
	    BigInteger m = new BigInteger(more);
	    BigInteger x = BigInteger.valueOf(2);
	    BigInteger k1 = t.add(m);
	    BigInteger k = k1.divide(x);
	    BigInteger n = t.subtract(k);
	    System.out.println(k.toString());
	    System.out.println(n.toString());
	}
    }
}

