
public class Duplicate {
    
    static boolean hasDuplicateContinuous(int a[], int cid) {
	if (cid == a.length-1) {
	    return false;
	}
	return a[cid] == a[cid+1] || hasDuplicateContinuous(a, cid+1);
    }

    public static void main(String[] args) {
	int a[] = {1,2,3,1,5};
	int b[] = {1,2,3,3,5};
	int c[] = {1,2,3,3};
	System.out.println(hasDuplicateContinuous(a, 0));
	System.out.println(hasDuplicateContinuous(b, 0));
	System.out.println(hasDuplicateContinuous(c, 0));
	

    }

}
