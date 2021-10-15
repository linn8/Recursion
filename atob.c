// another head recursion
#include <stdio.h>
#define LEN 20

int atob(int a, char * s, int b)
{
	static int index = 0;
	static const char * digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if (a)
	{
		atob(a/b, s, b); s[index++] = digits[a%b];
		s[index] = '\0';
		return index;
	}
	return index;
}

int main(void)
{
	int a = 9991;
	char s[LEN];
	atob(a, s, 16);
	puts(s);
}
