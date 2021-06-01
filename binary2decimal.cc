#include <iostream>
#include <cmath>

int binary(int num, int e)
{
	if (num == 0)
		return 0;
	return (num % 2)* pow(10, e) + binary(num/2, e+1);
}

int main()
{
	int a = 110;
	std::cout << "110 = " << binary(a, 0) << std::endl;
	int b;
	std::cout << "Enter an integer: ";
	std::cin >> b;
	std::cout << b << " = " << binary(b, 0) << std::endl;
}
