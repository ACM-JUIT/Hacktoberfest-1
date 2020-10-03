#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{
    char s[1000];
    printf("Enter the Paragraph :");
    scanf("%[^\n]%*c", s);
   
    int x = 0;
    // letters
    int y = 1;
    //words
    int z = 0;
    // sentences

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            x++;
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            x++;
        }
    }

    //end of letters
    for (int i = 0, n = strlen(s); i < n; i++)

        if (s[i] == ' ')
        {
            y++;
        }

    //end of words
    for (int i = 0, n = strlen(s); i < n; i++)
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            z++;
        }

    //end of sentences
    float let = (float)x / (float)y;
    float sent = (float)z / (float)y;
    float index = (0.0588 * let * 100 - 0.296 * sent * 100 - 15.8);

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    if (index > 0 && index < 16)
    {
        printf("Grade %i\n", (int) round(index));
    }


}