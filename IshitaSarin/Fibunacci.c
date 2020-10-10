#include <stdio.h>

int main()
{
    int a=0,b=1,n,sum=0,i;
    
    printf("Enter the number of terms:\t");
    scanf("%d",&n);
    
    printf("Fibonacci series:");
    
    printf("%d %d ",a,b);
    
    for(i=1;i<n-1;i++)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
    
    return 0;
}
