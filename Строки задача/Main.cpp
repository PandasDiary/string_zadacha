#define CRT_NO_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>

char s[256];
int sum = 1, max=1;

int main()
{
	printf("Write sequence of numbers ");
	gets_s(s);
	int m = strlen(s);
	for (int i=0; i < m-1; i++) 
	{
		if (s[i]==s[i+1])
		{
			sum++;
			if (sum > max) max = sum;
		}
		else 
		{
			sum = 1;
		}
	}
	printf("Max lenght of numbers = %i", max);
	_getch();
	return 0;
}