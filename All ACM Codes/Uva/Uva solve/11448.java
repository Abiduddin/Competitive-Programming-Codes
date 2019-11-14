import java.util.Scanner;
import java.math.*;

public class Main {
	public static void main(String args[]){
		Scanner ab = new Scanner(System.in);
		BigInteger n1,n2;
		double i,j;
		
		i=ab.nextDouble();
		
		for(j=1;j<=i;j++)
		{
			n1=ab.nextBigInteger();
			n2=ab.nextBigInteger();
			n1=n1.subtract(n2);
			System.out.println(n1);
		}
	}
}
