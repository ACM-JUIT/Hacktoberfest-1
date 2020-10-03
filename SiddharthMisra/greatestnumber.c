#include<stdio.h>
#include<float.h>
 int main()
 {
   float a,b,c;
   printf("Enter a number:");
   scanf("%f",&a);
   printf("Enter second number:");
   scanf("%f",&b);
   printf("Enter third number:");
   scanf("%f",&c);
  if (a>b && a>c){
    printf("%.1f is the largest number.",a);}
    else if (b>a && b>c){
        printf("%.1f is the largest number.",b);}
        else if (c>a && c>b){
            printf("%.1f is the largest number.",c);}
    else
    {
        printf("all equal");
    }

  return 0;
 }
