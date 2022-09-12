/*Program name: Detab.
In this program SPACEs == TABs. Change tabs('\t') by spaces(' ')*/
#include<stdio.h>

#define SPACES	4		

bool ReadChar(int& c)
{
	c = getchar();										//Read input symb.
	{
		if (c == '\t')									//If symb == '\t'
		{
			printf("%4s", c);
			//for (int i = 0; i < SPACES - 1; i++)		
			//	{
					
			//	}
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
