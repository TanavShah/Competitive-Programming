import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
	Scanner in = new Scanner(System.in);
	while(true)
	{
	    BigInteger n = in.nextBigInteger();
	    int d = in.nextInt();
	    BigInteger b1 = BigInteger.valueOf(0);
	    if((n.compareTo(b1) == 0) && (d == 0))
	    break;
	    BigInteger ans;
	    ans = n.pow(d);
	    System.out.println(ans);
	}
    }
}
