
public class CountDown {

    static void countDownI(int n) {
	for(int i = n; i >= 0; i--) {
	    System.out.print(i);
	}
	System.out.println("Hooray!");
    }
    
    static void countDownR(int n) {
	if (n < 0) {
	    System.out.println("Hooray!");
	    return;
	}
	System.out.print(n);
	countDownR(n-1);
    }
    public static void main(String[] args) {
	countDownI(5);
	countDownR(5);

    }

}
