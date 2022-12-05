#include<stdio.h>
#define MAXLINE 50
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

/*Task 5.6^Rewrite appropriate programs from earlier chapters and exercises with pointers instead of array indexing. 
Good possibilities include "getline", "atoi", "reverse", "strindex" and "getop" .*/
int getline(char* s, int lim)
{
    int i = 0 , symb = 0;
    while (--lim > 0 && (symb = getchar()) != EOF && symb != '\n')
    {
        *s++ = symb++;
        ++i;
    }
    if (symb == '\n')
    {
        *s++ = symb;
        ++i;
    }
    *s = '\0';
    return i - 1;
}

int atoi(const char* s)
{
    int n = 0;
    while (*s >= '0' && *s <= '9')
        {
            n = 10 * n + (*s - '0');
            s++;
        }
    return n;
}

void reverse(char* slovo, int lenght)
{
    int len = 0, i = 0;
    for (len = 0; slovo[len] != '\0'; ++len)
        ;
    char dr_slovo[MAXLINE];
    while (i < len)
    {
        dr_slovo[len - 1 - i++] = *slovo++;
    }
    dr_slovo[i] = '\0';
    printf("Result reverse function: %s\n", dr_slovo);
}




int main()
{
//For task 5.3:
    printf("STRCUT\n");
    char word[MAXLINE] = "Hello";
    char word_2[] = ", World!";
    printf("Word_1: %s\n", word);
    printf("Word_2: %s\n", word_2);
    strcut(word, word_2);
    printf("Result strcut function: %s\n", word);

//For task 5.4:
    printf("STREND\n");
    strend(word, word_2);
    char word_3[] = ", Worlderfe!"; 
    printf("Word_1: %s\n", word);
    printf("Word_3: %s\n", word_3);
    strend(word, word_3);       //check another word
    printf("Result strend function: %s\n", word);

//For task 5.5.1:
    printf("STRCPY\n");
    int i = 4;
    char word_for_5_5[MAXLINE];
    strcpy(word_for_5_5, "Hello", i);
    printf("Result strcpy function: '%s' with %d characters\n", word_for_5_5, i);

//For task 5.5.2:
    printf("STRCCUT\n");
    printf("Word_1: %s\n", word_for_5_5);
    printf("Word_2: %s\n", word_3);
    strccut(word_for_5_5, word_3, i);
    printf("Result strccut function: '%s'\n", word_for_5_5);

//For task 5.5.3:
    printf("STRCMP\n");
    i = 2;
    printf("Word_1: %s\n", word_for_5_5);
    printf("Word_2: %s\n", word);
    strncmp(word_for_5_5, word, i);
    printf("Result strncmp function: '%s'\n", word_for_5_5);


//For task 5.6
    char word_for_5_6[MAXLINE];
    i = getline(word_for_5_6, MAXLINE);
    printf("Result 'getline' funcrion: % d\n", i);
    
    i = atoi(word_for_5_6);
    printf("Result 'atoi' funcrion: %d\n", i);

    reverse(word_for_5_6, MAXLINE);

    return 0;
}
