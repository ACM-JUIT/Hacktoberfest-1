#include <stdio.h>

int main()
{  int n,r, reverse=0,m;
 printf("enter a no ");
 scanf("%d",&n);
m=n;
 while(n!=0)
 {  r=n%10;
 reverse=reverse*10+r;
 n=n/10;
 } if(n==m)
    printf("reverse no is palindrome");
else
 printf("reverse no is not  palindrome");
    return 0;
}
