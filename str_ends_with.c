#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ends_with(char s[], char t[], int index)
{
	if (index == 0)
		return true;
	else
		return s[strlen(s)-index] == t[strlen(t)-index] && ends_with(s, t, index-1);
}

int main(void)
{
	char s[] = "Sixty, Clumsy and Shy";
	char t[] = "Shy";
	if (ends_with(s, t, strlen(t)))
	{
		printf("That's the story of my life.\n");
	}
}
