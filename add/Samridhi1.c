// printing nth term of fibonacci series
#include<stdio.h>
int main(void)
{
int n, i, a=0,b=1,c;//intialising first and second term of the series as a and b
printf("Enter the term:");
scanf("%d",&n);// input from user
for(i=1;i<n;i++){
c=a+b;
a=b;
b=c;
if(i==n)
break;
}

printf("%d",a);
return 0;
}
