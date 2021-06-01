
public class TriangularNumber {

    static int getTriangleNum(int number) {
	// get triangular number with iteration approach
	int triangularNumber = 0;
	while(number >0) {
	    triangularNumber = triangularNumber + number;
	    number--;
	}
	return triangularNumber;
    }
    
    static int getTriNumR(int number) {
	// using recursion here
	// tri(n) = n + tri(n-1)
	if (number == 1) {
	    return 1;
	} else {
	    return number + getTriNumR(number-1);
	}
    }
    
    public static void main(String[] args) {


    }
}