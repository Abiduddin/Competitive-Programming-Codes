import java.util.Scanner;
import java.math.*;

public class Main {
	public static void main(String args[]){
		Scanner ab = new Scanner(System.in);
		BigInteger n1,n2;
		String a1,a2;
		double i,j;
		
		i=ab.nextDouble();
		
		for(j=1;j<=i;j++)
		{
			a1=ab.next();
			a2=ab.next();
			n1=new BigInteger(a1);
			n2=new BigInteger(a2);
			n1=n1.subtract(n2);
			System.out.println(n1);
		}
	}
}
