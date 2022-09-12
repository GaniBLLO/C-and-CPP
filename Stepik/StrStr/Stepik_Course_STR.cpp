#include<stdio.h> 

int strst(const char* text, const char* pattern)
{
    int sovpadenii = 0;


    while (*text != '\0' && *pattern != '\0')                       //Start circle while one of words not ending
        {
            if (*text == ' ' && *pattern == ' ')                    //if empty(no symb)....step over with move poinetrs
                {
                    text++;
                    pattern++;
                }
            else if (*text == *pattern )                            //start checking
                {
                    while (*text != '\0' || *pattern != '\0')
                        {
                            sovpadenii++;
                            text++;
                            pattern++;
                        }
                        return *(text - sovpadenii - 1);
                }
            else
            {
                text++;
            }
        }
    if (sovpadenii == 0)
        {
            return -1;
        }
    return *(text - sovpadenii -1 );
}

int main()
{
    char words[] = {"bolba"};
    char words_1[] = {"bo"};
    int key = strst(words, words_1);
    return 0;
}
