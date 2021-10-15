#include <stdio.h>

int sum_array(int a[], int i)
{
	if (i == 0)
		return a[i];
	return a[i] + sum_array(a, i-1);
}

int main(void)
{
	int a[] = {1, 2, 3};
	int b[] = {2, 3, 4, 5, 6};
	printf("%d\n", sum_array(a, 3-1));
	printf("%d\n", sum_array(b, 5-1));
}
