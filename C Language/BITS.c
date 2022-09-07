//Work with bits 
#include<stdio.h>
int main()
{
	unsigned char av = 13;				//0000 1101
	unsigned char so = 3;				//0000 0011
	av = av | so;						//0000 1111 = 15 
	printf("%d\n",(int)av);				//(int) - conversion to data type

	av = av << 4;						//Shift to the left by 4 bits
	printf("%d\n", (int)av);			//1111 0000 << 4 = 1111 0000 = 240

	so = 151;							//1001 0111
	av = av & so;						//1111 0000 & 1001 0111 = 1001 0000 = 144
	printf("%d\n", (int)av);

	av = av >> 5;						//Shift to the right by 5 bits
	printf("%d\n", (int)av);			//1001 0000 >> 5 = 0000 0100 = 4
	return 0;
}

