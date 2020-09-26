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
	    BigInteger b = in.nextBigInteger();
	    BigInteger c = in.nextBigInteger();
	    BigInteger d = in.nextBigInteger();
	    BigInteger a = ((c.multiply(BigInteger.valueOf(2))).subtract(b)).subtract(d);
	    System.out.println(a.toString());
	}
	}
    }
