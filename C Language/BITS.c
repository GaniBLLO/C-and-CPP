//Work with bits 
#include<stdio.h>
int main()
{
	unsigned char av = 13;							//0000 1101
	unsigned char so = 3;							//0000 0011
	av = av | so;									//0000 1111 = 15 
	printf("13 | 3 = %u\n",av);						//(int) - conversion to data type

	av = av << 4;									//Shift to the left by 4 bits
	printf("15 << 4 = %u\n", av);					//1111 0000 << 4 = 1111 0000 = 240

	so = 151;										//1001 0111
	av = av & so;									//1111 0000 & 1001 0111 = 1001 0000 = 144
	printf("151 & 3 = %u\n", av);

	av = av >> 5;									//Shift to the right by 5 bits
	printf("144 >> 5 = %u\n", av);					//1001 0000 >> 5 = 0000 0100 = 4

	av = 63;
	av |= (av << 8) & 0xff00;						//input mask with & 0xff00 - [1111 1111 0000 0000];
	printf ("(63 << 8) & 0xff00 |= %u\n", av);		//0010 0000 = 32

	av = 63;
	av = av & 0x00ff;								//input mask with & 0xff00 - [1111 1111 0000 0000];
	printf ("63 & 0xff00 = %u\n", av);				//0010 0000 = 32
	return 0;
}
