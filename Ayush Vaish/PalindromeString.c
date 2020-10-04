/*To print those words in a sentence which are palindrome*/

#include <stdio.h>
#include <string.h>
int main()
{
  char S[1000];        //To store Sentence//
  printf("Enter Sentence to be checked\n");
  scanf("%[^\n]%*c", S);
  int l = strlen(S);
  S[l] = ' ';
  char w[100];        //To extract words from string//
  printf("Palindrome words are :- \n");
  int c = 0;
  for(int i = 0; i<(strlen(S)); i++)
  {
     char a = S[i];
     if(a!=' ')
     {
        w[c] = a;
        c++;
     }
     else
     {
         int cw = 0;
         int bw = strlen(w);  // To store length of word//
         char revw[bw];   // To store reverse of the word//
         for(int j = bw-1; j>=0; j--)
         {
              revw[cw++] = w[j];
         }
         int res = strcmp(w, revw);  //To compare both the words
         if(res == 0)  //To check if they are same words
            printf("%s\n", w);
         memset(&w[0], 0, strlen(w)); //to reset the word

         c = 0;
      }
  }
  return 0;
}
