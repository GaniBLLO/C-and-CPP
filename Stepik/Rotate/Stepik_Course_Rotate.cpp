/*Program name: array in function. Need to move the array to the left by 2 points*/
#include<stdio.h>

void rotate(int a[], unsigned size, int shift) // array, size of array, shift value
{
    int temp;
    for(int* pa = a; pa <= a+size; ++pa)
    {
        temp = *pa;
        if(pa >= a+size)
            {
                *pa = pa[shift-1];
                pa[shift-1] = temp;
            }
        else
            {
                *pa = pa[shift];
                pa[shift] = temp;
            }
        
    }
}



int main()
{
    int a[] = {1, 2 , 3, 4, 5}, sh = 2, array_size = sizeof(a)/sizeof(int); //inizialisation
    rotate(a, array_size, sh);
    return 0;
}



