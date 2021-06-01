
public class AddUpTo {

    // adds the array elements up to n
    static int addUpTo(int array[], int index) {
	if (index == 0) {
	    return array[index];
	} else {
	    return array[index] + addUpTo(array, index-1);
	}
    }

    public static void main(String[] args) {
	int array[] = { 2, 3,10, 100, 300};
	System.out.println(addUpTo(array, array.length-1));
    }

}
