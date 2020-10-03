#include<stdio.h>

int main()
{
    printf("Sum");
    int n,sum=0,c,value;

    printf("\n\nEnter the number:  ");
    scanf("%d", &n);

    printf("Enter %d number\n\n",n);
    for(c = 1; c <= n; c++)
    {
        scanf("%d", &value);

        sum += value;
    }

    printf("\n\n\nsum of entered numbers  = %d", sum);

    return 0;
}
