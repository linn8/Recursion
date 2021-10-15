#include <stdio.h>

int search_r(int a[], int index, int length, int num)
{
	if (index == -1)
		return -1;
	else if (a[index] == num)
		return index;
	else
		return search_r(a, index+1, length, num);
}

int main(void)
{
	int a[] = {2, 3, 44, 0, 7, 6};
	printf("%d\n", search_r(a, 0, 6, 7));
}
