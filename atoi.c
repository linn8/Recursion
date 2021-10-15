#include <stdio.h>
#define N 20
void atoi(int n, char s[])
{
	static int i = 0;
	if (n)
	{
		atoi(n/10, s);
		s[i++] = n%10 + '0';
		s[i] = '\0';
	}
}

int main(void)
{
	char s[N];
	int i;
	printf("Enter a number: ");
	scanf("%d", &i);
	atoi(i, s);
	puts(s);
}
