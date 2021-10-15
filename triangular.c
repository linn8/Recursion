#include <stdio.h>
// triangular number of 4 = 4 + 3 + 2 + 1

int get_triangular_num(int n)
{
	if (n == 1)
		return n;
	else
		return n + get_triangular_num(n-1);
}

int main(void)
{
	printf("Triangular number of 10 is %d\n", get_triangular_num(10));
}

