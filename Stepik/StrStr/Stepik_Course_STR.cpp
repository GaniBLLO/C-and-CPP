#include<stdio.h> 
#include < string.h >


int strst(const char* text, const char* pattern)
{
    char tmp;
    int i = 0;
    while (*text)
        {
            if (*text == *pattern)
                {
                    i++;
                    pattern++;
                    text++;
                }
            else
                text++;
        }
    return i;
}


int main()
{
    char words[] = {""};
    char words_1[] = {"mell"};
    int key = strst(words, words_1);
    return 0;
}
