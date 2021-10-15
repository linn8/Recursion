#include <stdio.h>
#define SIZE 4

// generate strings for brute-force attack
// might be tough to see how this works
void brute_force(char s[], int index, int length)
{
	if (index == length-1)
	{
		s[index] = '\0';
		puts(s);
		return;
	}
	else
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			s[index] = c;
			brute_force(s, index+1, length);
		}
	}
}

void bruteforce_length_4(char s[])
{
	// it does something like this for a length of 3
	for (char c = 'a'; c <= 'z'; c++)
	{
		s[0] = c; // index of 0
		for (char d = 'a'; d <= 'z'; d++)
		{
			s[1] = d; // index of 1
			for (char e = 'a'; e <= 'z'; e++)
			{
				s[2] = e; // index of 2
				s[3] = '\0';	// index of 3
			}
		}
	}
}

int main(void)
{
	char s[SIZE];
	brute_force(s, 0, SIZE);
}
