
public class Factorial {
    
    static int factorial(int n) {
	// F(n) = n * F(n-1) = n* F(n-1) * F(n-2) * ... * 1
	if (n == 1) {
	// keeps calling until n is 1
	    return 1;
	} else {
	    int result = n * factorial(n-1);
	    return result;
	}
    }

    public static void main(String[] args) {
	System.out.println(factorial(26));
    }
}
