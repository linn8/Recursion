#include <stdio.h>

void print(int a[], int length)
	// this is head recursion
{
	if (length >= 0)
	{
		print(a, length-1);
		printf("%d ", a[length]);
	}
}

void print_r(int a[], int length)
	// this is tail recursion
{
	if (length == 0)
		printf("%d\n", a[length]);
	else
	{
		printf("%d, ", a[length]);
		print_r(a, length-1);
	}
}

int main(void)
{
	int a[] = {1, 2, 33, 44, 56, 78, 99};
	print(a, 6);
	printf("\n");
	print_r(a, 6);
}
