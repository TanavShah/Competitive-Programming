import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
	Scanner in = new Scanner(System.in);
	{
	    while(in.hasNextBigInteger())
	    {
		BigInteger n = in.nextBigInteger();
		if(n.equals(BigInteger.ONE))
		{
		    System.out.println(1);
		}
		else
		{
		    System.out.println(n.subtract(BigInteger.ONE).multiply(BigInteger.valueOf(2)));
		}
	    }
	}
    }
}
