
public class Fibonacci {
    
    static int fib(int n) {
	// fib(n) = fib(n-1) + fib(n-2)
	if (n == 1 || n == 0) {
	    return 1;
	} else {
	    return fib(n-1) + fib(n-2);
	}
    }

    public static void main(String[] args) {
	System.out.println(fib(13));
    }
}
