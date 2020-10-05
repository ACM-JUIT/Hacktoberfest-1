#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    scanf("%d", &n);
    int sum=0;
    for (i = 1; i <= n-1; ++i) //loop till nth term of febonacci series
    {   sum+=t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;   //transferring numbers to print febonacci
    }
    if(n==1)
    printf("0");  //printing 0 as 0 is the first number in the series
    else 
    printf("%d",sum+1);//(sum of n-1th term)+1=the nth term //printing series
    return 0;
}
