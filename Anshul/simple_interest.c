#include<stdio.h>
int main()
{
int principal_amt, rate, time, simple_interest;

printf("ENTER Principal Amount, Rate, Time : \n");
scanf("%d  %d  %d",&principal_amt,&rate,&time);

simple_interest=(principal_amt*rate*time)/100;

printf("Simple interest = %d",simple_interest);

return 0;
}
