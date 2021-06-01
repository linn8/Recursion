// prints all permutations of an array
import java.util.Arrays;
public class Permute {
    
    static void swap(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
    }
    
    static void permute(int a[], int cid) {
	if (cid == a.length-1) {
	    System.out.println(Arrays.toString(a));
	    return ;
	}
	
	for(int i = cid; i < a.length; i++) {
	    swap(a, i, cid);
	    permute(a, cid+1);
	    swap(a, i, cid);	// swapping back to restore the array
	}
    }

    public static void main(String[] args) {
	int a[] = { 3, 1, 4, 5, 9};
	permute(a, 0);
    }
}
