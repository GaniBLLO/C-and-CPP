/*Program name: squeezek & any.
Squeezek = In this program s2 delete all removes what appears in the string s1
Any = analog strpbrk*/

#include<stdio.h>

void squeezek(char s1[], const char s2[])
{
    int i, j;
    for (i = j = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] != *s2)
                s1[j++] = s1[i];
            else
                *s2++;
        }
    s1[j] = '\0';

}

int any(const char s1[], const char s2[])
{
    int i, j;
    if(!*s2)
        return -1;
    for (j = i = 0; s1[i] != '\0'; i++)
        {
        if (s1[i] == *s2)
            return i+1;
        }
    return -1;
}

int main()
{
    char w_1[] = { "Hello_dude_how_are_you?" }, w_2[] = {"_dude"};
    squeezek(w_1, w_2);
	int result = any(w_1, w_2);
    printf("%d", result);
	return 0;
}
