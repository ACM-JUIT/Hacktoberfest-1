//This program is made to find the sum of digits of a number entered by the user
#include<stdio.h>
int main()
{
    int i,n,x,sum=0;
    scanf("%d", &n);
    while(n!=0)
    {
        x=n%10;
        sum=sum + x;
        n=n/10;
    }
    printf("Sum of digits: %d",sum);
    return 0;
}
