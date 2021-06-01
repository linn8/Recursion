
public class LinearSearch {

    static int searchR(int a[], int num, int left, int right) {
	if (left > right) {
	    return -1;
	}
	if (num == a[right]) {
	    return right;
	}
	if (num == a[left]) {
	    return left;
	}
	return searchR(a, num, left+1, right-1);
    }

    public static void main(String[] args) {
	int a[] = {1, 2, 3, 4, 11, 6 };
	int num = 11;
	
	// using iterative approach
	System.out.println(searchR(a, num, 0, a.length-1));
    }

}
