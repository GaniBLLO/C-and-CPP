#include<stdio.h> 

void strcatr(char* to, const char* from)
{
    while (*to != '\0')
        *++to;
    while (*from != '\0')
        *to++ = *from++;
    *to = '\0';
}



int main()
{
    char w_1[7] = { "era" }, w_2[] = { "mag" };
    strcatr(w_1, w_2);
    return 0;
}
