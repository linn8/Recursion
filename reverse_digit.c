#include <stdio.h>

// this is called head recursion, i found it hard to understand the first time
int reverse_digit(int n)
{
	static int ret_val = 0;
	static int base_pos = 1;
	if(n > 0)
	{
		reverse_digit(n/10);
		ret_val += (n%10) * base_pos;
		base_pos *= 10;
	}
	return ret_val;
}

int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("The reversed is: %d\n", reverse_digit(num));

	return 0;
}
