#include <iostream>

bool endsWith(std::string str, std::string end, int index)
{
	if (index == 0)
		return true;
	return str.at(str.size() - index) == end.at(end.size() - index) && endsWith(str, end, index-1);
}
int main()
{
	std::string s("HELLO WORLD");
	std::string end("LD");
	std::cout << endsWith(s, end, end.size()) << std::endl;

	std::string s1("HELLO WORLD");
	std::string end1(" WORLD");
	std::cout << endsWith(s1, end1, end1.size()) << std::endl;

	std::string s2("HELLO WORLD");
	std::string end2(" world");
	std::cout << endsWith(s2, end2, end2.size()) << std::endl;
}

