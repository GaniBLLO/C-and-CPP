/*Write program which reverse input word*/
#include<stdio.h>
#include<string.h>
#define MAXLINE 50

void reverse (char slovo[])
  {
    int len = strlen(slovo)-1;
    char dr_slovo[len];
      for (int i = 0; i < len; ++i)
        {
            dr_slovo[len-1-i] = slovo[i];
        }
    printf ("%s\n", dr_slovo);
  }

int main()
{ 
  int slovo = 0;
  char word[MAXLINE];
  int i = 0;
  while(slovo != EOF)
    {
      word[i] = getchar();
      if (word[i] == '\n')
        {
          reverse(word);
            for(int k = 0; k < MAXLINE-1; k++)
              word[k] = 0;
          i = 0;
          continue;
        }
      else if (word[i] == -1)
        break;
      ++i;
    }  
  return 0; 
}
