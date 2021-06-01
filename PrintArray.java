
public class PrintArray {

    static void printForwards(int a[], int index) {
	if (index == a.length-1) {
	    System.out.println(a[index]);
	    return;
	}
	System.out.print(a[index] + " ");
	printForwards(a, index+1);
    }
    static void printBackwards(int a[], int index) {
	if (index == 0) {
	   System.out.println(a[index]);
	   return;
	}
	System.out.print(a[index] + " ");
	printBackwards(a, index-1);
    }
    public static void main(String[] args) {
	int a[] = {1, 3, 99, -1, 2};
	printForwards(a, 0);
	printBackwards(a, a.length-1);

    }

}
