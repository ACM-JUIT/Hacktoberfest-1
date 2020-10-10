#include <stdio.h>

int main()
{
    int a,b,sum;
    a = 10;
    b = 20;
    sum = ++a + b++ + --b + a-- ;
    printf("sum is %d",sum);
    return 0;
}

