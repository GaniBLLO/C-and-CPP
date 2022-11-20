#include<stdio.h>
#include<time.h>
#define ARR 100

/*Write a function expand (s1, s2) that expands shorthand notations like a - z in the string s 
1 into the equivalent complete list abc ... xyz in s2. 
Allow for letters of either case and digits, and be prepared to handle cases
like a-b-c and a-zO-9 and -a-z. Arrange that a leading or trailing - is taken literally.*/

void expand(unsigned char interval[], unsigned char alhabet[])
{
    int i=0, j=0, done = 0;
    for (i; alhabet[i] != '\0'; i++)
        {
            if (alhabet[i] == interval[j])
            {
                j += 2;
                while (alhabet[i] != interval[j])
                {
                    printf("%c", alhabet[i++]);
                }
            printf("%c", alhabet[i++]);
            alhabet[i] = '\0';
            }
        }
}
int main()
{
    unsigned char arr_ASCII[ARR], interval[ARR];
    int symbol = 0, i =0;
    while ((symbol = getchar()) != '\n')
        {
            interval[i++] = symbol;
        }
    interval[i] = '\0';
    if(interval[0] == '-' || interval[2] == '-')
        {
            printf("Error input");
            return 1;
        }
//              make array of ASCII symbols
////////////////////////////////////////////////////////////////////
    for (i = 0, symbol = '0'; symbol != 'z'+1; symbol++)
        {
        if (symbol >= '0' && symbol <= '9')
            arr_ASCII[i++] = symbol;
        else if (symbol >= 'A' && symbol <= 'Z')
            arr_ASCII[i++] = symbol;
        else if (symbol >= 'a' && symbol <= 'z')
            arr_ASCII[i++] = symbol;
        }
    arr_ASCII[i] = '\0';
////////////////////////////////////////////////////////////////////
    __clock_t time_start = clock();
    expand(interval, arr_ASCII);
    __clock_t time_end = clock() - time_start;
    printf("\n time is :%f sec\n", (float)time_end/CLOCKS_PER_SEC);
    return 0;
}
