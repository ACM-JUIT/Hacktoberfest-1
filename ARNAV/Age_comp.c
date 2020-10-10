
#include<stdio.h>
int main()
{
int a,b,c;
printf("Age of Ram:");
scanf("%d",&a);
printf("\nAge of Shayam:");
scanf("%d",&b);
printf("\nAge of Ajay:");
scanf("%d",&c);
if(a<b && a<c)
{printf("Ram");
}
else if(b<a && b<c)
{printf("Shayam");
}
else
{printf("Ajay");}
return 0;
}
