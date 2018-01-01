import java.math.BigInteger;
import java.util.*;

class Fibonacci
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a,b;
		int n;
		a = sc.next();
		b = sc.next();
		n = sc.nextInt();
		BigInteger result = new BigInteger("0");
		BigInteger t1 = new BigInteger(a);
		BigInteger t2 = new BigInteger(b);
		
		for (int i = 0; i < n - 2 ; i++) {
			result = t1.add(t2.multiply(t2));
			t1 = t2;
			t2 = result;
			
		}
		System.out.println(result);

	}
}