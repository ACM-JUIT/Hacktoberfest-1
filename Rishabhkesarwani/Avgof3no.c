#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a, c, b, t;
    printf("Enter First No.\n");
    scanf("%d",&a);
    printf("Enter Second No.\n");
    scanf("%d",&b);
    printf("Enter Third No.\n");
    scanf("%d",&c);
    t = (a+b+c)/3;
    printf("Average of numbers are %d", t);
    return 0;
}
