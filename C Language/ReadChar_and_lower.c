#include<stdio.h>

/*Rewrite the function lower, which converts upper case letters
to lower case, with a conditional expression instead of if-else.*/
int lower(int symbol)
	{
	    return symbol = (symbol >= 'A' && symbol <= 'Z')? symbol + 'a' - 'A': symbol;
	}
	
int main()
{

	int symbols;
    	while(symbols != EOF)
        {
            symbols = getchar();
            putchar(lower(symbols));   
        }
	return 0;
}
