#include <stdio.h>

int power(int base, int expo);
int main(void)
{
	int base, expo;
	base = 2;
	expo = 20;
	printf("%d\n", power(base, expo));

	return 0;
}

/*
 * 3 ^ 4 = 3 ^ 2 * 3 ^ 2
 * 3 ^ 5 = 3 * 3 ^ 4
 */
int power(int base, int expo)
{
	if(expo == 0)
		return 1;
	if (expo % 2 == 0)
		return power(base, expo/2) * power(base, expo/2);
	else
		return base * power(base, expo-1);
}
