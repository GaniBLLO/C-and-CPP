#include<stdio.h> 

void rotate(char *to, const char* from) 
{
    char* tmp;
    for (char* word_1 = to; word_1; word_1++)
    {
       if(*word_1 == '\0')
           for (const char* word_2 = from; word_2; word_2++)
           {
               tmp = word_1;
               word_1 = from;
               from = tmp;
           }
    }
}



int main()
{
    char words[11] = {"Hello"};
    char words_1[] = {"World"};
    rotate(words, words_1);
    return 0;
}
