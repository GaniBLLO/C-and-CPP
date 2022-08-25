#include<stdio.h>

bool ReadChar(int& c)
	{	
		c = getchar();
		return c != EOF;
	}
int main()
{
	int c;
	while (ReadChar(c))
	{
		putchar(c);
	}
	return 0;
}
