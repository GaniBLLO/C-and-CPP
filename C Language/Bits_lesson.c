#include<stdio.h>
/*Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p
    set to the rightmost n bits of y, leaving the other bits unchanged.*/

unsigned setbits(unsigned initial_bit_value, int point, int n, unsigned second)
{
    initial_bit_value &= ~(~0 << (point - 1));
    second <<= (point - 1);
    return initial_bit_value |= second;
}

/*Write a function invert(x,p,n) that returns x with the n bits that begin at position p
inverted (i.e., I changed into 0 and vice versa), leaving the others unchanged.*/

unsigned inverts(unsigned initial_bit_value, int point, int n)
{
    unsigned mask = (initial_bit_value >> (point + n - 1));
    mask <<= (point + n - 1);
    unsigned mask_2 = (~initial_bit_value >> (point - 1)) & ~(~0 << n);
    mask_2 <<= (point - 1);
    unsigned mask_3 = initial_bit_value & ~(~0 << (point - 1));
    return mask |= (mask_2 | mask_3);
}

/*Write a function rightrot(x,n) that returns the value of the
integer x rotated to the right by n bit positions*/

unsigned rightrot(unsigned initial_bit_value,unsigned shift)
{
    for (; shift != 0; shift--)
        {
            if (initial_bit_value & 1)
                initial_bit_value = (initial_bit_value >> 1) | ~(~0 >> 1);
            else
                initial_bit_value = initial_bit_value >> 1;
        }
    return initial_bit_value;
}

int main()
{

        /////////////////////////////////////////////////////////
        int point = 9, select = 3;
        unsigned key = 0xD9;
        unsigned y = key & ~(~0 << (select));
        unsigned result = setbits(key, point, select, y);
        printf("%u\n", result);
        /////////////////////////////////////////////////////////
        key = 0xD9;
        point = 1;
        select = 8;
        result = inverts(key, point, select);
        printf("%u\n", result);
        /////////////////////////////////////////////////////////
        key = 0xD9;
        select = 2;
        result = rightrot(key, select);
        printf("%u\n", result);
        return 0;
}

