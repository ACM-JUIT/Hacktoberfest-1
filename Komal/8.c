#include<stdio.h>
int main()
{
    int i,n,product=1;
    printf("Enter the number:");
    scanf("%d",&i);
    while(i!=0)
    {
        n = i%10;
        product = product*n;
        i = i/10;
    }
       printf("Product of digits is:%d",product);
       return 0;

}
