/*Program name: array in function. Need to move the array to the left by 2 points*/
#include<stdio.h>

void rotate(int a[], unsigned size, int shift) // array, size of array, shift value
{
    int temp;
    for(int i = 0; i < shift; ++i)
        {
            for (int* p = a; p < a + size -1; p++)
                {
                    temp = *p;
                    *p = *(p+1);
                    *(p+1)= temp;
                }        
        }
}



int main()
{
    int a[] = {1, 2 , 3, 4, 5}, sh = 2, array_size = sizeof(a)/sizeof(int); //inizialisation
    rotate(a, array_size, sh);
    return 0;
}




