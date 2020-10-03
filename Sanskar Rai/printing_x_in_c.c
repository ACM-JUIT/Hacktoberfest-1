#include <stdio.h>

int main()
{
    unsigned int n; // #Hacktoberfest
    printf("Enter The Number of rows \(\Minimum Value Of Rows is 3\)\ of X pattern You Want to Be printed\n");
    scanf("%d", &n);
    for(unsigned int i = 1; i<= n; i++)
    {
        for(unsigned int j = 1; j<= n; j++)
            if(i == j || i+j == n+1)
                printf("* ");
            else
                printf("  ");
            printf("\n");
    }
    printf("\n");
    return 0;
}
// Made By Sanskar Rai
