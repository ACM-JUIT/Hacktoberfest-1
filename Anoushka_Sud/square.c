#include<stdio.h>
main()
{
int a;
printf("enter the digit:  ");
scanf("%d",&a);
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {printf("* ");}
        printf("*");
        printf("\n");
    }
    return 0;
}
