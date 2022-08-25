/*Program name: Detab.
In this program SPACEs == TABs. Change tabs('\t') by spaces(' ')*/
#include<stdio.h>
#define SPACES	4		

bool ReadChar(int& c)
{
	char k = ' ';
	c = getchar();					//Read input symb.
	{
		if (c == '\t')				//If symb == '\t'
		{
			for (int i = 0; i < SPACES - 1; i++)
				{
					printf("%s", k);
				}
		}
		else
			return c != EOF;
	}
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
