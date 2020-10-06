#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
        if(n%i==0)
            k++;
    }
    if(k==2)
        printf("prime no");
    else
        printf("not a prime number");
    return 0;
}
