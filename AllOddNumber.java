
public class AllOddNumber {

    // returns true if all elements in array are odd numbers
    static boolean allOdd(int a[], int index) {
	if (index == 0) {
	    return a[index] % 2 == 1;
	}
	return (a[index] % 2 == 1) && allOdd(a, index-1);
    }
    public static void main(String[] args) {
	int a[] = { 1, 9, 11, 13 };
	int b[] = { 1, 2, 9, 14};

	System.out.println(allOdd(a, a.length-1));
	System.out.println(allOdd(b, b.length-1));
    }

}
