import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
	Scanner in = new Scanner(System.in);
	int n = in.nextInt();
	for(int i = 0 ; i < n ; i++)
	{
	    BigInteger l1 = in.nextBigInteger();
	    BigInteger l2 = in.nextBigInteger();
	    BigInteger ans = l1.multiply(l2);
	    System.out.println(ans);
	}    
    }
}

