#include <stdio.h>
void main()
{
   int n,a,sum=0;

   printf("Enter no. of terms: ");
   scanf("%d",&n);
   printf("\n odd numbers are:");
   for(a=1;a<=n;a++)
   {
     printf("%d ",2*a-1);
     sum+=2*a-1;
   }
   printf("\nThe Sum of odd Num %d terms:%d\n",n,sum);
}
