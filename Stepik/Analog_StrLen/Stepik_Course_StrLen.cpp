//Analog strlen
#include<stdio.h> 

unsigned rotate(const char *str) 
{
    unsigned symb = 0;
    while (str) 
    {
        if (*str == '\0')
            return symb;
        else
        {
            return symb = rotate(str + 1) + 1;
        }
    }
}



int main()
{
    char words[] = {"HelloHowYouDoing?"};
    int len = rotate(words);
    return 0;
}
