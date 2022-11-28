/*Write program which reverse input word*/
#include<stdio.h>
#include<cstringt.h>
#define MAXLINE 50

void reverse(char slovo[], int index)
{
    int len = strlen(slovo);
    if (len / 2 == index)
        return;
    else
    {
        char tmp = slovo[index];
        slovo[index] = slovo[len - 1 - index];
        slovo[len - 1 - index] = tmp;
        reverse(slovo, ++index);
    }
        
}

void reverse(char slovo[])
{
    int len = strlen(slovo), i =0;
    char dr_slovo[MAXLINE];
    while(i < len)
    {
        dr_slovo[len - 1 - i] = slovo[i];
        ++i;
    }
    dr_slovo[i] = '\0';
    printf("%s\n", dr_slovo);
}


int main()
{
    int slovo = 0, i = 0;
    char word[MAXLINE];
    while ((word[i] = getchar()) != EOF)
    {
        if (word[i] == '\n')
        {
            word[i] = '\0';
            int index = 0;
            reverse(word, index);
            printf(word);
            printf("\n");
            reverse(word);
            printf("\n");
            printf("\n");
            for (int k = 0; k < MAXLINE - 1; k++)
                word[k] = 0;
            i = 0;
            continue;
        }
        ++i;
    }
    return 0;
}