#include<stdio.h> 

int strst(const char* text, const char* pattern)
{
    int sovpadenii = 0;
    while (*text && *pattern != '\0')
        {
            if (*text == *pattern )
                {
                    pattern++;
                    text++;
                    sovpadenii++;
                }
            else
            {
                text++;
            }
        }
    if (sovpadenii == 0)
        {
            return - 1;
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
