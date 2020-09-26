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
	BigInteger x10 = new BigInteger("10");
	BigInteger x4 = new BigInteger("4");
	BigInteger x2 = new BigInteger("2");
        BigInteger a1 = a.mod(x10);
	BigInteger b4 = b.mod(x4);
	BigInteger b2 = b.mod(x2);
	if(a1.equals(BigInteger.valueOf(0)))
	{
	    System.out.println(0);
	}
	if(a1.equals(BigInteger.valueOf(1)))
	{
	    System.out.println(1);
	}
	if((a1.equals(BigInteger.valueOf(2))) && (b4.equals(BigInteger.valueOf(1))))
	{
	    System.out.println(2);
	}
        if((a1.equals(BigInteger.valueOf(2))) && (b4.equals(BigInteger.valueOf(2))))
	{
	    System.out.println(4);
	}
        if((a1.equals(BigInteger.valueOf(2))) && (b4.equals(BigInteger.valueOf(3))))
	{
	    System.out.println(8);
	}
	if((a1.equals(BigInteger.valueOf(2))) && (b4.equals(BigInteger.valueOf(0))))
	{
	    System.out.println(6);
	}
	if((a1.equals(BigInteger.valueOf(3))) && (b4.equals(BigInteger.valueOf(1))))
	{
	    System.out.println(3);
	}
	if((a1.equals(BigInteger.valueOf(3))) && (b4.equals(BigInteger.valueOf(2))))
	{
	    System.out.println(9);
	}
	if((a1.equals(BigInteger.valueOf(3))) && (b4.equals(BigInteger.valueOf(3))))
	{
	    System.out.println(7);
	}
	if((a1.equals(BigInteger.valueOf(3))) && (b4.equals(BigInteger.valueOf(0))))
	{
	    System.out.println(1);
	}
        if((a1.equals(BigInteger.valueOf(4))) && (b2.equals(BigInteger.valueOf(1))))
	{
	    System.out.println(4);
	}
	if((a1.equals(BigInteger.valueOf(4))) && (b2.equals(BigInteger.valueOf(0))))
	{
	    System.out.println(6);
	}
	if(a1.equals(BigInteger.valueOf(5)))
	{
	    System.out.println(5);
	}
	if(a1.equals(BigInteger.valueOf(6)))
	{
	    System.out.println(6);
	}
        if((a1.equals(BigInteger.valueOf(7))) && (b4.equals(BigInteger.valueOf(1))))
	{
	    System.out.println(7);
	}
	if((a1.equals(BigInteger.valueOf(7))) && (b4.equals(BigInteger.valueOf(2))))
	{
	    System.out.println(9);
	}
	if((a1.equals(BigInteger.valueOf(7))) && (b4.equals(BigInteger.valueOf(3))))
	{
	    System.out.println(3);
	}
	if((a1.equals(BigInteger.valueOf(7))) && (b4.equals(BigInteger.valueOf(0))))
	{
	    System.out.println(1);
	}
        if((a1.equals(BigInteger.valueOf(8))) && (b4.equals(BigInteger.valueOf(1))))
	{
	    System.out.println(8);
	}
	if((a1.equals(BigInteger.valueOf(8))) && (b4.equals(BigInteger.valueOf(2))))
	{
	    System.out.println(4);
	}
	if((a1.equals(BigInteger.valueOf(8))) && (b4.equals(BigInteger.valueOf(3))))
	{
	    System.out.println(2);
	}
	if((a1.equals(BigInteger.valueOf(8))) && (b4.equals(BigInteger.valueOf(0))))
	{
	    System.out.println(6);
	}
	if((a1.equals(BigInteger.valueOf(9))) && (b2.equals(BigInteger.valueOf(1))))
	{
	    System.out.println(9);
	}
	if((a1.equals(BigInteger.valueOf(9))) && (b2.equals(BigInteger.valueOf(0))))
	{
	    System.out.println(1);
	}

}
    }
}

