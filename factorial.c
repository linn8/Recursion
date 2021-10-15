#include <stdio.h>

int factorial(int n)
{
	// f(n) = n * f(n-1)
	if (n == 1)
		return 1;
	else
		return n * factorial(n-1);
}

int main(void)
{
	printf("Factorial of 10 is %d\n", factorial(10));

}
