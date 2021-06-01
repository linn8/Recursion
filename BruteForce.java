// generating strings to brute-force passwords

public class BruteForce {

    public static void main(String[] args) {
	int length = 5;
	char ch[] = new char[length];
	
	/*
	// using iteration approach
	for(int i = 0; i < 26; i++) {
	    for(int j = 0; j < 26; j++) {
		for(int k = 0; k < 26; k++) {
		    for(int l = 0; l < 26; l++) {
			for(int m = 0; m < 26; m++) {
			    ch[0] = (char)('A' + i);
			    ch[1] = (char)('A' + j);
			    ch[2] = (char)('A' + k);
			    ch[3] = (char)('A' + l);
			    ch[4] = (char)('A' + m);
			    System.out.println(String.valueOf(ch));
			}
		    }
		}
	    }
	}
	*/
	generate(ch, 0); 
	// if we are generating strings of length 50, without recursion, we will need
	// 50 for loops!!
    }

    static void generate(char ch[], int cid) {
	if (cid == ch.length-1) {
	    System.out.println(String.valueOf(ch));
	    return;
	}
	
	for(int i = 0; i < 26; i++) {
	    ch[cid] = (char) ('A' + i);
	    generate(ch, cid+1);
	}
    }
}
