#include <stdio.h>

void reverse(char s[])
{
	static int i = 0;
	static int j = 0;
	if (s[i] != '\0')
	{
		char c = s[i++];
		reverse(s);
		s[j++] = c;
	}
}

int main(void)
{
	char s[] = "nothing else matters";
	reverse(s);
	puts(s);
}
