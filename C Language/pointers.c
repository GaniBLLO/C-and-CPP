#include<stdio.h>

//Task 5.3 Write a pointer version of the function strcat: strcat(s,t) copies the string t to the end of s.
void strcut(char* s, char* t)
{
    while (*s != '\0')
        s++;
    while (*s++ = *t++)
        ;
}

//Task 5.4 Write the function strend(s,t), which returns 1 if the string t occurs at the end of the string s, and zero otherwise.
int strend(const char* s, const char* t)
{
    while(*s)
    {
        if (*s == *t)
        {
            for (; *s == *t; s++, t++)
            {
                if ((*s == '\0') && (*t == '\0'))
                    return 1;
                else if ((*s == '\0') || (*t == '\0'))
                    return 0;
            }
        }
        s++;
    }
}

/*Task 5.5 Write versions of the library functions strncpy, strncat, and strncmp, 
which operate on at most the first n characters of their argument strings.For example, strncpy(s, t, n) copies at most n characters of t to s.*/
//5.5.1 function strncpy
char strcpy(char* s, const char* t, int range)
{
    for (int i = 0; i < range; i++)
        *s++ = *t++;

    return *s = '\0';
}

//5.5.2 function strnccut
void strccut(char* s, char* t, int range)
{
    while (*s != '\0')
        s++;
    for (int i = 0; i <= range; i++)
        *s++ = *t++;
    *s = '\0';
}

//5.5.3 function strncmp
int strncmp(const char* s, const char* t, int range)
{
    while (*s)
    {
        if (*s == *t)
        {
            for (int i =0; *s == *t ; s++, t++, i++)
            {
                if (((*s == '\0') && (*t == '\0')) || i == range)
                    return 1;
                else if (((*s == '\0') || (*t == '\0')) || i == range)
                    return 0;
            }
        }
        s++;
    }
}

int main()
{
//For task 5.3:
    char word[50] = "Hello";
    char word_2[] = ", World!";
    strcut(word, word_2);

//For task 5.4:
    strend(word, word_2);
    char word_3[] = ", Worlderfe!"; 
    strend(word, word_3);       //check another word

//For tast 5.5.1:
    int i = 4;
    char word_for_5_5[50];
    strcpy(word_for_5_5, "Hello", i);

//For tast 5.5.2:
    strccut(word_for_5_5, word_3, i);

//For tast 5.5.3:
    i = 2;
    strncmp(word_for_5_5, word, i);

    return 0;
}
