#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
double d,root1,root2;

printf("Enter the value of a=");
scanf("%d",&a);
printf("\nEnter the value of b=");
scanf("%d",&b);
printf("\nEnter the value of c=");
scanf("%d",&c);

//Calculating discriminant
   d=sqrt((b*b)-(4*a*c));


//Conditions
     if(d>0||d==0)
     {
     root1=(-b+d)/(2*a);
     root2=(-b-d)/(2*a);
     printf("\nRoots are real!!");
     printf("\n\n1st root = %lf ",root1);
     printf("\n\n2nd root = %lf ",root2);
     }


     else
     {
     printf("Roots are imaginary!!");
     }
}
